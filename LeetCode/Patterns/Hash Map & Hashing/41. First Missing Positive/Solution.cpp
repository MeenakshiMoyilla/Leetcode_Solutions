class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i,maxi=INT_MIN;
        unordered_map<int,int> mp;
        for(i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            // maxi=max(maxi,nums[i]);
        }
        // for(auto x: mp)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(i=1;i<=nums.size();i++)
        {
            cout<<i<<"  ";
            if(!(mp.find(i)!=mp.end()))  return i;
        }
        return 1;
    }
};