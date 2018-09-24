using System;
using System.Collections.Generic;
using UnityEngine;

namespace App.Data
{
    public class QuestionBasedTrackerData : BaseTrackerData
    {
        protected List<Answer> _answers = new List<Answer>();
        protected int _currentQuestionIndex = 0;

        public class Answer
        {
            public int option;

            public Answer()
            {
                option = -1;
            }

            public Answer(string json)
            {
                // parse json
                JSONObject obj = new JSONObject(json);
                if (obj.HasField("option"))
                {
                    option = (int) obj.GetField("option").n;
                }
            }

            public JSONObject FormatToJson()
            {
                JSONObject jsonObj = new JSONObject();
                jsonObj.AddField("option", option);
                return jsonObj;
            }
        }

        protected QuestionBasedTrackerData(DateTime date) : base(date)
        {
            
        }

        public QuestionBasedTrackerData(string json) : base(json)
        {
            List<JSONObject> list = _jsonObject.GetField("answers").list;

            _answers.Clear();
            for (int i = 0; i < list.Count; i++)
            {
                _answers.Add(new Answer(list[i].ToString()));
            }
        }

        public virtual QuestionData SetAnswer(QuestionData question, int option)
        {
            // get question index
            _currentQuestionIndex = questionDataList.IndexOf(question);

            // create or update existing answer
            // update
            if (_currentQuestionIndex < _answers.Count)
            {
                _answers[_currentQuestionIndex].option = option;
            }
            // create new
            else
            {
                _answers.Add(new Answer
                {
                    option = option
                });
            }

            // if there are some more questions after that
            if (_currentQuestionIndex < questionDataList.Count - 1)
            {
                _currentQuestionIndex++;
                if (option == 0 && questionDataList[_currentQuestionIndex].canBeSkipped)
                {
                    // create or update next dummy answer with default params
                    if (_currentQuestionIndex < _answers.Count)
                    {
                        _answers[_currentQuestionIndex].option = option;
                    }
                    // create new default
                    else
                    {
                        _answers.Add(new Answer());
                    }

                    if (_currentQuestionIndex < questionDataList.Count - 1)
                    {
                        // jump over skipped question if some more questions exists
                        _currentQuestionIndex++;
                    }
                }

                // return next question data
                return GetQuestion();
            }

            // inform listeners about completion
            OnComplete?.Invoke(GetScore());

            // returning null will allow to understand that there are no more questions
            return null;
        }

        public override JSONObject FormatToJson()
        {
            // get created json object with data included
            JSONObject jsonObject = base.FormatToJson();

            JSONObject answersObject = new JSONObject();
            for (int i = 0; i < _answers.Count; i++)
            {
                // just add entry to the list
                answersObject.Add(_answers[i].FormatToJson());
            }
            jsonObject.AddField("answers", answersObject);
            return jsonObject;
        }

        public QuestionData GetQuestion()
        {
            // Debug.Log($"In data {this.GetType().Name} first question is {questionDataList[0].question}");
            return questionDataList[_currentQuestionIndex];
        }

        public virtual bool IsCompleted()
        {
            return _answers.Count == questionDataList.Count;
        }

        /// <summary>
        /// Don't store points in a log file because if something changes (especially on testing) we will need to modify all logs entries.
        /// </summary>
        /// <returns></returns>
        public virtual int GetScore()
        {
            _totalScore = 0;

            for (int i = 0; i < _answers.Count; i++)
            {
                // in some cases for "empty" answer we just initialise default Result data with default value -1
                if (_answers[i].option > -1)
                {
                    _totalScore += questionDataList[i].answersOption[_answers[i].option].points;
                }
            }

            return _totalScore;
        }

        public List<QuestionData> questionDataList;

        public class QuestionData
        {
            public string question;

            public AnswerOption[] answersOption;

            // this option is actual only for SymptomData, in other cases keep it always <false>
            public bool canBeSkipped;
        }

        public struct AnswerOption
        {
            public int option;
            public int points;
            public string description;
        }
    }
}