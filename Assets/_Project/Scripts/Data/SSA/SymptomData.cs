using System.Collections.Generic;

namespace App.Data.SSA
{
    public class SymptomData : BaseTrackerData
    {
        private BaseResult _cough;
        private BaseResult _wheezing;
        private BaseResult _breath;
        private BaseResult _awakening;

        public class BaseResult
        {
            public int option;
            public DataKeeper.Type type;

            public BaseResult()
            {
                option = -1;
                type = DataKeeper.Type.None;
            }
            
            public BaseResult(string json)
            {
                // parse json
                JSONObject obj = new JSONObject(json);
                option = (int) obj.GetField("option").n;
                type = (DataKeeper.Type) System.Enum.Parse(typeof(DataKeeper.Type), obj.GetField("type").str, true);
            }

            public void SetOption(int opt)
            {
                option = opt;
                
                // automatically set to none if option with index 0 selected
                if (option == 0)
                {
                    SetType(DataKeeper.Type.None);
                }
            }

            public void SetType(DataKeeper.Type type)
            {
                this.type = type;
            }

            public bool IsCompleted()
            {
                return option == 0 || (option > 0 && type != DataKeeper.Type.None);
            }

            public JSONObject FormatToJson()
            {
                JSONObject jsonObj = new JSONObject();
                jsonObj.AddField("option", option);
                jsonObj.AddField("type", type.ToString());
                return jsonObj;
            }
        }

        public SymptomData(string json)
        {
            JSONObject jsonObject = new JSONObject(json);
            if (jsonObject.HasField("Cough"))
            {
                _cough = new BaseResult(jsonObject.GetField("Cough").str);
            }

            if (jsonObject.HasField("Wheezing"))
            {
                _wheezing = new BaseResult(jsonObject.GetField("Wheezing").str);
            }

            if (jsonObject.HasField("ShortnessOfBreath"))
            {
                _breath = new BaseResult(jsonObject.GetField("ShortnessOfBreath").str);
            }

            if (jsonObject.HasField("EpisodesOfAwakeningAtNight"))
            {
                _awakening = new BaseResult(jsonObject.GetField("EpisodesOfAwakeningAtNight").str);
            }
        }
        
        public override JSONObject FormatToJson()
        {
            JSONObject jsonObject = new JSONObject();
            jsonObject.AddField("Cough", _cough.FormatToJson());
            jsonObject.AddField("Wheezing", _wheezing.FormatToJson());
            jsonObject.AddField("ShortnessOfBreath", _breath.FormatToJson());
            jsonObject.AddField("EpisodesOfAwakeningAtNight", _awakening.FormatToJson());

            return jsonObject;
        }

        public int GetPoints()
        {
            int points = 0;

            for (int i = 0; i < DataKeeper.details.Count; i++)
            {
                DataKeeper.Details d = DataKeeper.details[i];
                if (_cough != null && _cough.option == d.option)
                {
                    points += d.points;
                }
                
                if (_wheezing != null && _wheezing.option == d.option)
                {
                    points += d.points;
                }
                
                if (_breath != null && _breath.option == d.option)
                {
                    points += d.points;
                }
                
                if (_awakening != null && _awakening.option == d.option)
                {
                    points += d.points;
                }
            }
            return points;
        }
    }

    public class DataKeeper
    {
        public enum Type
        {
            None,
            Mild,
            Moderate,
            Severe
        }

        public struct Details
        {
            public int option;
            public int points;
            public string description;
        }

        public static List<Details> details = new List<Details>
        {
            new Details {option = 0, points = 0, description = "Not at all"},
            new Details {option = 1, points = 1, description = "1-3 days"},
            new Details {option = 2, points = 2, description = "4-7 days"},
            new Details {option = 3, points = 3, description = "8-14 days"}
        };
    }
}