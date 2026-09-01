class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),result=0,rem=0;
        vector<int> prefix(n+1);
        unordered_map<int,int> mp;
        prefix[0]=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            prefix[i+1]=prefix[i]+nums[i];
        }
        mp[0]++;
        for(i=1;i<prefix.size();i++)
        {
            int a=(prefix[i]%k);
            if(mp.find(a)!=mp.end())   result+=mp[a];
            if(a<0)
            {
                rem=(a+k)%k;
                mp[rem]++;
            }
            else
            mp[a]++;
            // int b=(k-a)*-1;
            // int need=a*
            // cout<<a<<"  "<<b<<endl;
            // if(mp.find(a)!=mp.end() && mp.find(b)!=mp.end())
            // {
            //     result+=mp[a];
            //     result+=mp[b];
            // }
            // else if(mp.find(a)!=mp.end())   result+=mp[a];
            // else if(mp.find(b)!=mp.end())   result+=mp[b];
            // mp[prefix[i]]++;
        }

        // for(i=0;i<prefix.size();i++)
        // {
        //     cout<<prefix[i]<<" ";
        // }
        return result;
    }
};