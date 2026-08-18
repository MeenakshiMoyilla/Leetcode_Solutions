class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=nums[0],maxsum=nums[0],i;
        for(i=1;i<nums.size();i++)
        {
            currentsum=max(currentsum+nums[i],nums[i]);
            maxsum=max(maxsum,currentsum);
        }
        return maxsum;
    }
};