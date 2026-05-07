class Solution {
public:
    vector<int> orArray(vector<int>& nums) {
      int   n= nums.size();
        vector<int> answer(n-1);

        for(int i = 0;i<n-1;i++)
        {
            answer[i]=nums[i]|nums[i+1];
        }
        return answer;
    }
};