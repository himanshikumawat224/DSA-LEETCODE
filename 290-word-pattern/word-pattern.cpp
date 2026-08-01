
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        
        string word;
        while(ss>>word)
        {
            words.push_back(word);
        }
        if(pattern.length()!= words.size())
        {
            return false;
        }
        for(int i = 0;i< pattern.length();i++)
        {
            for(int j= i+1;j<words.size();j++)
            {
                if(pattern[i]==pattern[j] && words[i]!=words[j] || pattern[i]!=pattern[j] && words[i]==words[j])
                {
                    return false;
                }
                
            }
        }
        return true;

    }
};