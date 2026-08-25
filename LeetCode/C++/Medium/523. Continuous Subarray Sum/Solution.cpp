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
            int low=0,high=pre.size()-1,idx=0;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(pre[mid]==need) 
                {
                    int idx=mid;
                    high=mid-1;
                }
                else if(pre[mid]<need)  low=mid+1;
                else                    high=mid-1;
            }
            auto it=mp.find(need);
            if(idx!=i-1){
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