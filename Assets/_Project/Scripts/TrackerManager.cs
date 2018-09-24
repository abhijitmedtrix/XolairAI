using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using App.Utils;
using UnityEngine;
using App.Data;
using App.Data.SSA;
using App.Data.CSU;
using Random = UnityEngine.Random;
#if UNITY_EDITOR
using UnityEditor;

#endif

public class TrackerManager : MonoSingleton<TrackerManager>
{
    public enum TrackerType
    {
        CSU,
        UAS,
        Asthma,
        Symptom
    }

    private static Dictionary<DateTime, LogData> _trackerDictionary = new Dictionary<DateTime, LogData>();

    // we also need to keep sorted list to use  
    private static List<LogData> _logDataList = new List<LogData>();
    private static List<JSONObject> _csuJsonObjectList = new List<JSONObject>();
    private static List<JSONObject> _uasJsonObjectList = new List<JSONObject>();
    private static List<JSONObject> _asthmaJsonObjectList = new List<JSONObject>();
    private static List<JSONObject> _symptomJsonObjectList = new List<JSONObject>();

    private const int LOG_LIFE_TIME = 60;
    public const string LOGS_FOLDER = "logs";

    // SSA
    private const string SYMPTOM_LOG = "symptom_tracker.json";
    private const string ASTHMA_TEST_LOG = "asthma_control_test.json";

    // CSU
    private const string CSU_LOG = "CSU_tracker.json";
    private const string UAS_LOG = "urticaria_activity_score.json";

    private void Start()
    {
        DateTime today = DateTime.Now.Date;

        // parse log files on start if exists

        // symptom tracker
        string path = Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, SYMPTOM_LOG);
        List<JSONObject> jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            SymptomData data = new SymptomData(jsonObj.ToString());

            // don't manage outdated logs
            if ((today - data.GetDate()).TotalDays > LOG_LIFE_TIME) continue;

            _symptomJsonObjectList.Add(jsonObj);

            // check if this date already exists
            if (_trackerDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                UpdateEntry(data.GetDate(), data);
            }
            else
            {
                // add new entry
                UpdateEntry(data.GetDate(), new LogData {symptomData = data});
            }
        }

        // asthma test
        path = Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, ASTHMA_TEST_LOG);
        jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            AsthmaData data = new AsthmaData(jsonObj.ToString());

            // don't manage outdated logs
            if ((today - data.GetDate()).TotalDays > LOG_LIFE_TIME) continue;

            _asthmaJsonObjectList.Add(jsonObj);

            // check if this date already exists
            if (_trackerDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                UpdateEntry(data.GetDate(), data);
            }
            else
            {
                // add new entry
                UpdateEntry(data.GetDate(), new LogData {asthmaData = data});
            }
        }

        // CSU test
        path = Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, CSU_LOG);
        jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            CSUData data = new CSUData(jsonObj.ToString());

            // don't manage outdated logs
            if ((today - data.GetDate()).TotalDays > LOG_LIFE_TIME) continue;

            _csuJsonObjectList.Add(jsonObj);

            // check if this date already exists
            if (_trackerDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                UpdateEntry(data.GetDate(), data);
            }
            else
            {
                // add new entry
                UpdateEntry(data.GetDate(), new LogData {csuData = data});
            }
        }

        // UAS test
        path = Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, UAS_LOG);
        jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            UASData data = new UASData(jsonObj.ToString());

            // don't manage outdated logs
            if ((today - data.GetDate()).TotalDays > LOG_LIFE_TIME) continue;

            _uasJsonObjectList.Add(jsonObj);

            // check if this date already exists
            if (_trackerDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                UpdateEntry(data.GetDate(), data);
            }
            else
            {
                // add new entry
                UpdateEntry(data.GetDate(), new LogData {uasData = data});
            }
        }
    }

    /// <summary>
    /// Request particular day entry.
    /// </summary>
    /// <param name="date">Date must be formatted to Date only</param>
    /// <returns>Return null if doesn't exists</returns>
    public static LogData GetLogData(DateTime date)
    {
        if (_trackerDictionary.ContainsKey(date))
        {
            return _trackerDictionary[date];
        }

        return null;
    }

    /// <summary>
    /// Request particular day entry.
    /// </summary>
    /// <param name="date">Date must be formatted to Date only</param>
    /// <returns>Return new data if doesn't exists and previously created otherwise</returns>
    public static QuestionBasedTrackerData GetData(DateTime date, TrackerType type)
    {
        LogData logData = GetLogData(date);
        // if there is not log data yet
        if (logData == null)
        {
            return GenerateNewData(date, type);
        }
        else
        {
            switch (type)
            {
                case TrackerType.Asthma:
                    if (logData.asthmaData != null)
                    {
                        return logData.asthmaData;
                    }

                    break;
                case TrackerType.Symptom:
                    if (logData.symptomData != null)
                    {
                        return logData.symptomData;
                    }

                    break;
                case TrackerType.CSU:
                    if (logData.csuData != null)
                    {
                        return logData.csuData;
                    }

                    break;
                case TrackerType.UAS:
                    if (logData.uasData != null)
                    {
                        return logData.uasData;
                    }

                    break;
            }

            return GenerateNewData(date, type);
        }
    }

    private static QuestionBasedTrackerData GenerateNewData(DateTime date, TrackerType type)
    {
        switch (type)
        {
            case TrackerType.Asthma:
                return new AsthmaData(date);
            case TrackerType.Symptom:
                return new SymptomData(date);
            case TrackerType.CSU:
                return new CSUData(date);
            case TrackerType.UAS:
                return new UASData(date);
        }
    }

    /// <summary>
    /// Request particular day entry score.
    /// </summary>
    /// <param name="date">Date must be formatted to Date only</param>
    /// <returns>Return null if doesn't exists</returns>
    public static int GetScore(DateTime date, TrackerType type)
    {
        if (_trackerDictionary.ContainsKey(date))
        {
            if (type == TrackerType.Asthma)
            {
                return _trackerDictionary[date].asthmaData.GetScore();
            }
            else if (type == TrackerType.Symptom)
            {
                return _trackerDictionary[date].symptomData.GetScore();
            }
            else if (type == TrackerType.CSU)
            {
                return _trackerDictionary[date].csuData.GetScore();
            }
            else if (type == TrackerType.UAS)
            {
                return _trackerDictionary[date].uasData.GetScore();
            }
        }

        return 0;
    }

    #region Data update

    public static void UpdateEntry(DateTime day, LogData data)
    {
        if (_trackerDictionary.ContainsKey(day))
        {
            Debug.LogWarning("Same date already exists and you trying to update LogData");
            return;
        }

        _trackerDictionary.Add(day, data);
        _logDataList.Add(data);
    }

    public static void UpdateEntry(DateTime day, CSUData data)
    {
        _csuJsonObjectList.Add(data.FormatToJson());

        if (_trackerDictionary.ContainsKey(day))
        {
            // Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _trackerDictionary[day].UpdateData(data);
        }
        else
        {
            _trackerDictionary.Add(day, new LogData {csuData = data});
        }

        // update log file
        JSONObject o = new JSONObject();
        for (int i = 0; i < _csuJsonObjectList.Count; i++)
        {
            o.Add(_csuJsonObjectList[i]);
        }

        WriteToFile(GetPath(TrackerType.CSU), o.Print(true));
    }

    public static void UpdateEntry(DateTime day, UASData data)
    {
        _uasJsonObjectList.Add(data.FormatToJson());

        if (_trackerDictionary.ContainsKey(day))
        {
            // Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _trackerDictionary[day].UpdateData(data);
        }
        else
        {
            _trackerDictionary.Add(day, new LogData {uasData = data});
        }

        // update log file
        JSONObject o = new JSONObject();
        for (int i = 0; i < _uasJsonObjectList.Count; i++)
        {
            o.Add(_uasJsonObjectList[i]);
        }

        WriteToFile(GetPath(TrackerType.UAS), o.Print(true));
    }

    public static void UpdateEntry(DateTime day, AsthmaData data)
    {
        _asthmaJsonObjectList.Add(data.FormatToJson());

        if (_trackerDictionary.ContainsKey(day))
        {
            // Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _trackerDictionary[day].UpdateData(data);
        }
        else
        {
            _trackerDictionary.Add(day, new LogData {asthmaData = data});
        }

        // update log file
        JSONObject o = new JSONObject();
        for (int i = 0; i < _asthmaJsonObjectList.Count; i++)
        {
            o.Add(_asthmaJsonObjectList[i]);
        }

        WriteToFile(GetPath(TrackerType.Asthma), o.Print(true));
    }

    public static void UpdateEntry(DateTime day, SymptomData data)
    {
        _symptomJsonObjectList.Add(data.FormatToJson());

        if (_trackerDictionary.ContainsKey(day))
        {
            // Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _trackerDictionary[day].UpdateData(data);
        }
        else
        {
            _trackerDictionary.Add(day, new LogData {symptomData = data});
        }

        // update log file
        JSONObject o = new JSONObject();
        for (int i = 0; i < _symptomJsonObjectList.Count; i++)
        {
            o.Add(_symptomJsonObjectList[i]);
        }

        WriteToFile(GetPath(TrackerType.Symptom), o.Print(true));
    }

    #endregion

    #region Helpers

    private static List<JSONObject> GetJsonList(string path)
    {
        if (File.Exists(path))
        {
            string jsonString = File.ReadAllText(path);
            return new JSONObject(jsonString).list;
        }
        else
        {
            Debug.LogWarning("No log file found by path: " + path);
            return null;
        }
    }

    private static void WriteToFile(string path, string content)
    {
        FileInfo fileInfo = new FileInfo(path);
        fileInfo.Directory.Create();
        File.WriteAllText(path, content);
    }

    #endregion

#if UNITY_EDITOR
    /// <summary>
    /// Method for testing purposes when we need to fill some random data for particular period
    /// </summary>
    [MenuItem("Tools/Generate random log data")]
    public static void FillTestData()
    {
        // load random textures form resources
        Texture2D[] textures = Resources.LoadAll<Texture2D>("RandomTextures");

        int days = Random.Range(15, 30);
        DateTime date = DateTime.Now.AddDays(-days).Date;
        Debug.Log("Fixed start date: " + date.ToString("dd/MM/yyyy"));

        JSONObject symptomJsonObject = new JSONObject();
        JSONObject asthmaJsonObject = new JSONObject();
        JSONObject csuJsonObject = new JSONObject();
        JSONObject uasJsonObject = new JSONObject();

        for (int i = 0; i < days; i++)
        {
            // symptom tracker
            SymptomData symptomData = new SymptomData(date);
            for (int j = 0; j < symptomData.questionDataList.Count; j++)
            {
                QuestionBasedTrackerData.QuestionData qData = symptomData.GetQuestion();
                symptomData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));
            }

            symptomJsonObject.Add(symptomData.FormatToJson());

            // asthma test
            AsthmaData asthmaData = new AsthmaData(date);
            for (int j = 0; j < asthmaData.questionDataList.Count; j++)
            {
                QuestionBasedTrackerData.QuestionData qData = asthmaData.GetQuestion();
                asthmaData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));
            }

            asthmaJsonObject.Add(asthmaData.FormatToJson());

            // CSU test
            CSUData csuData = new CSUData(date);
            for (int j = 0; j < csuData.questionDataList.Count * 3; j++)
            {
                if (j == 0)
                {
                    csuData.ChangeBodyPart(CSUData.BodyPart.Head);
                }
                else if (j == 2)
                {
                    csuData.ChangeBodyPart(CSUData.BodyPart.Chest);
                }
                else if (j == 4)
                {
                    csuData.ChangeBodyPart(CSUData.BodyPart.Legs);
                }

                QuestionBasedTrackerData.QuestionData qData = csuData.GetQuestion();
                csuData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));

                if (Random.value > 0.5f)
                {
                    // add some random textures
                    int count = Random.Range(0, textures.Length);

                    // shuffle textures
                    System.Random rnd = new System.Random();
                    Texture2D[] shuffled = textures.OrderBy(x => rnd.Next()).ToArray();

                    // and cut out the array
                    Array.Resize(ref shuffled, count);

                    csuData.SavePhotos(shuffled);
                }
            }

            csuJsonObject.Add(csuData.FormatToJson());

            // UAS test
            UASData uasData = new UASData(date);
            for (int j = 0; j < uasData.questionDataList.Count; j++)
            {
                QuestionBasedTrackerData.QuestionData qData = uasData.GetQuestion();
                uasData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));
            }

            uasJsonObject.Add(uasData.FormatToJson());

            // add a single day
            date = date.AddDays(1);
        }

        WriteToFile(Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, CSU_LOG), csuJsonObject.Print(true));
        WriteToFile(Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, UAS_LOG), uasJsonObject.Print(true));
        WriteToFile(Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, SYMPTOM_LOG), symptomJsonObject.Print(true));
        WriteToFile(Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, ASTHMA_TEST_LOG), asthmaJsonObject.Print(true));

        Debug.LogWarning($"Random log data generated for {days} days");
    }

    [MenuItem("Tools/Delete all logs")]
    public static void DeleteLogs()
    {
        string dir = Path.Combine(Helper.GetDataPath(), LOGS_FOLDER);
        Directory.Delete(dir, true);
    }
#endif

    public static string GetPath(TrackerType type)
    {
        string fileName = "";
        if (type == TrackerType.Asthma)
        {
            fileName = ASTHMA_TEST_LOG;
        }
        else if (type == TrackerType.Symptom)
        {
            fileName = SYMPTOM_LOG;
        }
        else if (type == TrackerType.CSU)
        {
            fileName = CSU_LOG;
        }
        else if (type == TrackerType.UAS)
        {
            fileName = UAS_LOG;
        }

        return Path.Combine(Helper.GetDataPath(), LOGS_FOLDER, fileName);
    }

    /// <summary>
    /// Test method to generate random data for particular day.
    /// </summary>
    /// <param name="date"></param>
    /// <returns></returns>
    public static LogData GenerateRandomData(DateTime date)
    {
        // load random textures form resources
        Texture2D[] textures = Resources.LoadAll<Texture2D>("RandomTextures");
        date = date.Date;
        LogData logData = new LogData();

        // symptom tracker
        SymptomData symptomData = new SymptomData(date);
        for (int j = 0; j < symptomData.questionDataList.Count; j++)
        {
            QuestionBasedTrackerData.QuestionData qData = symptomData.GetQuestion();
            symptomData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));
        }

        logData.symptomData = symptomData;

        // asthma test
        AsthmaData asthmaData = new AsthmaData(date);
        for (int j = 0; j < asthmaData.questionDataList.Count; j++)
        {
            QuestionBasedTrackerData.QuestionData qData = asthmaData.GetQuestion();
            asthmaData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));
        }

        logData.asthmaData = asthmaData;

        // CSU test
        CSUData csuData = new CSUData(date);
        for (int j = 0; j < csuData.questionDataList.Count * 3; j++)
        {
            if (j == 0)
            {
                csuData.ChangeBodyPart(CSUData.BodyPart.Head);
            }
            else if (j == 2)
            {
                csuData.ChangeBodyPart(CSUData.BodyPart.Chest);
            }
            else if (j == 4)
            {
                csuData.ChangeBodyPart(CSUData.BodyPart.Legs);
            }

            QuestionBasedTrackerData.QuestionData qData = csuData.GetQuestion();
            csuData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));

            if (Random.value > 0.5f)
            {
                // add some random textures
                int count = Random.Range(0, textures.Length);

                // shuffle textures
                System.Random rnd = new System.Random();
                Texture2D[] shuffled = textures.OrderBy(x => rnd.Next()).ToArray();

                // and cut out the array
                Array.Resize(ref shuffled, count);

                csuData.SavePhotos(shuffled);
            }
        }

        logData.csuData = csuData;

        // UAS test
        UASData uasData = new UASData(date);
        for (int j = 0; j < uasData.questionDataList.Count; j++)
        {
            QuestionBasedTrackerData.QuestionData qData = uasData.GetQuestion();
            uasData.SetAnswer(qData, UnityEngine.Random.Range(1, qData.answersOption.Length));
        }

        logData.uasData = uasData;

        return logData;
    }
}