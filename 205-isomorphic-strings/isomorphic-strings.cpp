class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        for(int i = 0;i< s.length();i++)
        {
            for(int j = i+1;j< t.length();j++)
            {
                if(s[i]==s[j]&&t[i]!= t[j] || s[i]!= s[j] &&  t[i]==t[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};