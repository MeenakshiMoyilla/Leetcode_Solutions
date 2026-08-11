class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        int i;
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            v.push_back(nums[nums[i]]);
        }       
        return v;
    }
};