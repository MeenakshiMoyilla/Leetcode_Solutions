class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i,n=nums.size(),maxi=0,current=0;
        vector<int> prefix(n+1);
        unordered_map<int,int> mp;
        
        for(i=0;i<n;i++)
            if(nums[i]==0)  
                nums[i]=-1;

        prefix[0]=0;

        for(i=0;i<n;i++)        prefix[i+1]=prefix[i]+nums[i];

        // storing the index rather than frequency.
        mp[0]=0;

        for(i=1;i<n+1;i++){
            if(mp.find(prefix[i])!=mp.end())  {
                current= i - mp[prefix[i]];
                maxi=max(current,maxi);
            }
            else
            mp[prefix[i]]=i;
        }

        return maxi;
    }
};