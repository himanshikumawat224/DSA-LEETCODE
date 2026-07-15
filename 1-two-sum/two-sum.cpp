class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> mp;
     for(int i = 0;i<nums.size();i++)
     {
        int curr = nums[i];
        int complement = target-curr;
        if(mp.find(complement)!=mp.end())
        {
            return{i,mp[complement]};
        }
        mp[curr]=i;
 
     }
   return{};
    }

};