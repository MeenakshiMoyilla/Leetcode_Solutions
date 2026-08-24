class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i,maxi=INT_MIN;
        unordered_map<int,int> mp;
        for(i=0;i<nums.size();i++)          mp[nums[i]]++;
        for(i=1;i<=nums.size()+2;i++)
            if(!(mp.find(i)!=mp.end()))  return i;
        return 1;
    }
};