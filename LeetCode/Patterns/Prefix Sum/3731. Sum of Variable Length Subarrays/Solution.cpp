class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector<int> prefix(nums.size()+1);
        prefix[0]=nums[0];
        int i,sum=0;

        for(i=1;i<nums.size();i++)
            prefix[i]=prefix[i-1]+nums[i];

        for(i=0;i<nums.size();i++){
            int start=max(0,i-nums[i]);
            if(start==0)    sum=sum+prefix[i];
            else            sum=sum+prefix[i]-prefix[start-1];
        }

        return sum;
    }
};