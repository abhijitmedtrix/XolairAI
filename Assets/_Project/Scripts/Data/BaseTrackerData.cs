using System;
using System.Globalization;

namespace App.Data
{
    public class BaseTrackerData
    {
        public string date;

        private DateTime _fixedDate = DateTime.MinValue;

        public DateTime GetDate()
        {
            // if hadn't been parsed yet
            if (_fixedDate == DateTime.MinValue)
            {
                _fixedDate = DateTime.Parse(date, null, DateTimeStyles.AssumeLocal);
            }
            return _fixedDate;
        }

        public virtual JSONObject FormatToJson()
        {
            return null;
        }
    }
}