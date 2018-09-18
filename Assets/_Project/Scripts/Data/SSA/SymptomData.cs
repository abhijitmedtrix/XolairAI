namespace App.Data.SSA
{
    public class SymptomData : BaseTrackerData
    {
        public enum SSA_COUGH
        {
            None,
            Mild,
            Moderate,
            Severe
        }

        public SSA_COUGH cough;
    }
}