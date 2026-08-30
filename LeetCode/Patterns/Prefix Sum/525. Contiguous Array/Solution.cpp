class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i,n=nums.size(),maxi=0,current=0;
        vector<int> prefix(n+1);
        unordered_map<int,int> mp;
        for(i=0;i<n;i++){
            if(nums[i]==0)  nums[i]=-1;
        }
        prefix[0]=0;
        for(i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+nums[i];
        }
        mp[0]++;
        for(i=1;i<n+1;i++)
        {
            
            if(mp.find(prefix[i])!=mp.end())
            {
                // cout<<prefix[i]<<" ";
                auto it=find(prefix.begin(),prefix.begin()+i,prefix[i]);
                cout<<prefix[i]<<" "<<*it<<endl;
                int idx=it-prefix.begin();
                current= i - idx;

                maxi=max(current,maxi);
                // cout<<" c: "<<current<<" m : "<<maxi<<endl;
            }
            mp[prefix[i]]++;
            // cout<<prefix[i]<<"  ";
        }
        // cout<<endl;
        // for(auto x: mp)
        // cout<<x.first<<"  "<<x.second<<endl;

        return maxi;
    }
};