class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),result=0,rem=0,i;
        vector<int> prefix(n+1);
        unordered_map<int,int> mp;
        prefix[0]=0;

        for(i=0;i<nums.size();i++)      prefix[i+1]=prefix[i]+nums[i];
    
        mp[0]++;
        
        for(i=1;i<prefix.size();i++){
            int rem=(prefix[i]%k);
            if(rem<0)       rem=(rem+k)%k;
            if(mp.find(rem)!=mp.end())   result+=mp[rem];
            mp[rem]++;

        }

        return result;
    }
};