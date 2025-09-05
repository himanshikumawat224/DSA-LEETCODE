class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
       
        vector<bool>minutes(1440,false);
       
           for(string time : timePoints)
           {

       
            string hourSubstr=time.substr(0,2);
            string minSubstr= time.substr(3);
             
            int hourInt = stoi(hourSubstr);
            int minInt = stoi(minSubstr);
          int   min= hourInt *60 + minInt;
          if (minutes[min]) return 0;
          minutes[min]=true ;
        }
        int prev = INT_MAX;
        int curr = INT_MAX;
        int last = INT_MAX;
      
        int result= INT_MAX;
        for(int i = 0 ;i<1440;i++)
        {  if(minutes[i])
        {
            if(prev!=INT_MAX)
            {
                result= min(result,i-prev);
            }
            prev=i;
            if(curr==INT_MAX)
            {
                curr = i;
            }
            last = i;
        }
           
        }
        return min(result,24*60-last +curr);
    }
};