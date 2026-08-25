class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> pre(nums.size()+1);
        unordered_map<int,int> mp;
        int i;

        for(i=0;i<nums.size();i++)
        {
            pre[i+1]=pre[i]+nums[i];
        }
        mp[0]=1;
        for(i=1;i<pre.size();i++)
        {
            int need=pre[i]%k;
            auto it=mp.find(need);
            if(!(pre[i-1]==need)){
            if(it!=mp.end())
            {
                return true;
            }
            }
            mp[need]++;
        }
        // cout<<0%k;
        return false;
    }
};