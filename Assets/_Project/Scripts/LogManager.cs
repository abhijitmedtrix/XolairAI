using System;
using System.Collections.Generic;
using System.IO;
using App.Utils;
using UnityEngine;
using App.Data;
using App.Data.SSA;
using App.Data.CSU;

public class LogManager : MonoSingleton<LogManager>
{
    private static Dictionary<DateTime, LogData> _calendarDictionary = new Dictionary<DateTime, LogData>();

    // SSA
    private const string SYMPTOM_LOG = "symptom_tracker.log";
    private const string ASTHMA_TEST_LOG = "asthma_control_test.log";

    // CSU
    private const string CSU_LOG = "CSU_tracker.log";
    private const string UAS_LOG = "urticaria_activity_score.log";

    // test param to remove all logs
    public bool clearLogOnStart;

    private void Start()
    {
        // parse log files on start if exists

        // symptom tracker file
        string path = Path.Combine(Helper.StreamingAssetPath(), SYMPTOM_LOG);
        List<JSONObject> jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            SymptomData data = JsonUtility.FromJson<SymptomData>(jsonObj.str);

            // check if this date already exists
            if (_calendarDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                _calendarDictionary[data.GetDate()].symptomData = data;
            }
            else
            {
                // add new entry
                _calendarDictionary.Add(data.GetDate(), new LogData {symptomData = data});
            }
        }

        // asthma test
        path = Path.Combine(Helper.StreamingAssetPath(), ASTHMA_TEST_LOG);
        jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            AsthmaData data = JsonUtility.FromJson<AsthmaData>(jsonObj.str);

            // check if this date already exists
            if (_calendarDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                _calendarDictionary[data.GetDate()].asthmaData = data;
            }
            else
            {
                // add new entry
                _calendarDictionary.Add(data.GetDate(), new LogData {asthmaData = data});
            }
        }

        // CSU test
        path = Path.Combine(Helper.StreamingAssetPath(), CSU_LOG);
        jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            CSUData data = JsonUtility.FromJson<CSUData>(jsonObj.str);

            // check if this date already exists
            if (_calendarDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                _calendarDictionary[data.GetDate()].csuData = data;
            }
            else
            {
                // add new entry
                _calendarDictionary.Add(data.GetDate(), new LogData {csuData = data});
            }
        }

        // UAS test
        path = Path.Combine(Helper.StreamingAssetPath(), UAS_LOG);
        jsonList = GetJsonList(path);

        for (int i = 0; i < jsonList.Count; i++)
        {
            JSONObject jsonObj = jsonList[i];
            UASData data = JsonUtility.FromJson<UASData>(jsonObj.str);

            // check if this date already exists
            if (_calendarDictionary.ContainsKey(data.GetDate()))
            {
                // modify existing entry
                _calendarDictionary[data.GetDate()].uasData = data;
            }
            else
            {
                // add new entry
                _calendarDictionary.Add(data.GetDate(), new LogData {uasData = data});
            }
        }
    }

    public static List<JSONObject> GetJsonList(string path)
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

    
    #region Data update

    public static void UpdateEntry(DateTime day, LogData data)
    {
        if (_calendarDictionary.ContainsKey(day))
        {
            Debug.LogWarning("Same date already exists and you trying to update LogData");
            return;
        }

        _calendarDictionary.Add(day, data);
    }

    public static void UpdateEntry(DateTime day, CSUData data)
    {
        if (_calendarDictionary.ContainsKey(day))
        {
            Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _calendarDictionary[day].UpdateData(data);
        }
        else
        {
            _calendarDictionary.Add(day, new LogData{csuData = data});
        }
    }

    public static void UpdateEntry(DateTime day, UASData data)
    {
        if (_calendarDictionary.ContainsKey(day))
        {
            Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _calendarDictionary[day].UpdateData(data);
        }
        else
        {
            _calendarDictionary.Add(day, new LogData{uasData = data});
        }
    }

    public static void UpdateEntry(DateTime day, AsthmaData data)
    {
        if (_calendarDictionary.ContainsKey(day))
        {
            Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _calendarDictionary[day].UpdateData(data);
        }
        else
        {
            _calendarDictionary.Add(day, new LogData{asthmaData = data});
        }
    }

    public static void UpdateEntry(DateTime day, SymptomData data)
    {
        if (_calendarDictionary.ContainsKey(day))
        {
            Debug.LogWarning($"Same date {day.ToLongDateString()} log data already exist. Updating it.");
            _calendarDictionary[day].UpdateData(data);
        }
        else
        {
            _calendarDictionary.Add(day, new LogData{symptomData = data});
        }
    }

    #endregion

    private static void WriteToFile(string path, string content)
    {
        File.WriteAllText(path, content);
    }
}