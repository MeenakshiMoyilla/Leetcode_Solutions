class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        int i,n=nums.size();
        prefix[0]=1;
        suffix[nums.size()-1]=1;
        for(i=0;i<n-1;i++)
        {
            prefix[i+1]=prefix[i]*nums[i];
            suffix[n-2-i]=suffix[n-i-1]*nums[n-i-1];
        }
        for(i=0;i<n;i++)
        {
            nums[i]=prefix[i]*suffix[i];
        }
        return nums;
    }
};