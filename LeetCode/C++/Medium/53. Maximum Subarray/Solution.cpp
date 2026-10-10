class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN,current=0,i;
        for(i=0;i<nums.size();i++)
        {
            current=max(current+nums[i],nums[i]);
            maxsum=max(maxsum,current);
        }
        return maxsum;
    }
};