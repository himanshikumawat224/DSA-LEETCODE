class Solution {
public:
     vector<vector<int>>result;
     vector<int>path;

     void backtrack(vector<int> &candidates,int target, int index)
     {
        if(target==0)
        {
            result.push_back(path);
            return ;
        }
        if(target<0||index>=candidates.size())
        {
            return ;
        }
        path.push_back(candidates[index]);
        backtrack(candidates,target-candidates[index],index);

        path.pop_back();
        backtrack( candidates,target, index+1);
     }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates,target,0);
        return result;
    }
};