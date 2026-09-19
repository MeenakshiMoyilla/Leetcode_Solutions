class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int right=0,left=0,maxi=0,sum=0,n=nums.size();
        unordered_map<int,int> mp;

        for(right=0;right<n;right++)
        {
            mp[nums[right]]++;
            sum++;
            if(sum-mp[1]<=k)           maxi=max(maxi,right-left+1);
            else
            {
                while(mp[0]>k)
                {
                    mp[nums[left]]--;
                    left++;
                    sum--;
                }
            }
        }
        return maxi;
    }
};