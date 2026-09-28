class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i,j,n=nums.size(),maxi=0;
        vector<int> v;
        for(i=0;i<n-k+1;i++)
        {
            maxi=INT_MIN;
            for(j=i;j<i+k;j++)
            {
                maxi=max(maxi,nums[j]);
            }
            v.push_back(maxi);
        }
        return v;
    }
};