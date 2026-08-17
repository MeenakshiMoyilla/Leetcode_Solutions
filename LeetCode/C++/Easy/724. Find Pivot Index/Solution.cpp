class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> v1(nums.size());
        vector<int> v2(nums.size());
        int i;
        v1[0]=0,v2[nums.size()-1]=0;
        for(i=1;i<nums.size();i++)
        {
            v1[i]=v1[i-1]+nums[i-1];
            v2[nums.size()-i-1]=v2[nums.size()-i]+nums[nums.size()-i];
        }
        for(i=0;i<nums.size();i++)
        {
            if(v1[i]==v2[i])        return i;
        }
        return -1;
    }
};