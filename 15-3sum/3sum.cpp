class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;//this is for storing the triplets
         sort(nums.begin(),nums.end());//sort the array 
        for(int i =0;i<nums.size();i++)
        {
            if(i>0&&nums[i]==nums[i-1])continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j<k)//its indicate when we are stop and why because there is no such more element that form triplets
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum<0)
                {
                  j++;
                }
                else if(sum>0)
                {
                   k--;
                }
                else
                {
                    vector<int>temp{nums[i],nums[j],nums[k]};//initially store triplets in temp 
                    ans.push_back(temp);//then push the temp because there is a time weste that we combined triplets into ans so first in temp then in ans.
                    j++; 
                    //they are keep moving when they are cross each others then they are stops and we find there is no more triplets 
                    k--;
                    while(j<k&&nums[j]==nums[j-1]) j++;
                    while(j<k&&nums[k]==nums[k+1])k--;

                    
                }
            }
        }
        return ans;
    }
};