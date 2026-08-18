class Solution 
{
    public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int i;
        vector<int> v;
        for(i=0;i<nums.size()/2;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }
        return v;
    }
};