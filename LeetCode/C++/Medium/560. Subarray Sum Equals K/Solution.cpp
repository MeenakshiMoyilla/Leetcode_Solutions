class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> pre(nums.size()+1);
        pre[0]=0;
        unordered_map<int,int> mp;
        int i,res=0;
        for(i=0;i<nums.size();i++)
        {
            pre[i+1]=pre[i]+nums[i];
        }
        mp[0]=1;
        for(i=1;i<pre.size();i++)
        {
            // cout<<pre[i]<<endl;
            int need=pre[i]-k;
            auto it=mp.find(need);
            if(it!=mp.end())
            {
                res=res+mp[need];
            }
            mp[pre[i]]++;
        }
        return res;
    }
};