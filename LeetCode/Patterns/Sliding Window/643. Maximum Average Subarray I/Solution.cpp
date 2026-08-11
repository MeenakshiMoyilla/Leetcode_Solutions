class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        double ans=0,first=0;
        for(i=0;i<k;i++)
        {
            first=first+nums[i];
            ans=first;
            // cout<<first;
        }

        for(i=1;i<nums.size()-k+1;i++)
        {
            first=first+nums[k-1+i]-nums[i-1];
            ans=max(first,ans);
        }
        return ans/(double)k;
    }
};