class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i;
        vector<int> v;
        for(i=0;i<nums.size();i++)
        {
            int a=abs(nums[i])-1;
            if(nums[a]>0)   nums[a]*=-1;
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)     v.push_back(i+1);
        }
        return v;
    }
};