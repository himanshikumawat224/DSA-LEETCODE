class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>hash;
 
        int n =s.size();
        int l=0,r=0,maxlen=0;
        while(r<n)
        {
            if(hash.find(s[r])!=hash.end())
            {
                if(hash[s[r]]>=l)// when duplicate value arrive but before the l then update it place 
                {
                    l= hash[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxlen=max(len,maxlen);
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }

};