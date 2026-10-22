class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i;
        unordered_map<int,int> mp;
        
        for(i=0;i<nums.size();i++)            mp[nums[i]]++;
    
        for(i=1;i<=nums.size();i++)
        {
            if(mp.find(i)==mp.end())    return i;
        }
        return nums.size()+1;
    }
};