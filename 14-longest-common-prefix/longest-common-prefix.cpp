class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";

        //sorting 
        sort(strs.begin(),strs.end());

        // compare last and first
        string first = strs[0];
        string last = strs[n-1];
         
        //common prefix btw last and first 
         int i ;
         while(i < first.size() && i< last.size()&& first[i]==last[i])
         {
            i++;
         }
         return first.substr(0,i);
    }
};