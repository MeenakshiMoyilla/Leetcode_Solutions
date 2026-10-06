class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long right=0,left=0,n=nums.size(),sum=0,mini=0,count=0;
        for(right=0;right<n;right++)
        {
            sum=sum+nums[right];
            while(sum>=target)
            {
                if(count==0)
                {
                    mini=INT_MAX;
                    count++;
                }
                mini=min(mini,right-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        return mini;
    }
};