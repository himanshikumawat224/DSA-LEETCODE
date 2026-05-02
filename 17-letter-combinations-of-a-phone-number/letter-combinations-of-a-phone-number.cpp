class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        unordered_map<char,string> mp = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
         
         vector<string>ans;
         string current ; 
         solve(0,digits,current,ans,mp);
         return ans;
    }

    void solve(int index,string &digits,string &current , vector<string>&ans, unordered_map<char,string>&mp)
    {
        if (index==digits.size())
        {
         ans.push_back(current);
         return;
        }
         string letter = mp[digits[index]];

         for(char ch: letter)
         {
            current.push_back(ch);
            solve(index+1,digits, current,ans,mp);
            current.pop_back();
         } 
        
    }
};