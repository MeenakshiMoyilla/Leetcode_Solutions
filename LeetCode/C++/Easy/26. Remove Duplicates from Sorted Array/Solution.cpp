class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            int freq=count(nums.begin(),nums.end(),nums[i]);
            for(j=0;j<freq-1;j++)
            {
                nums.erase(nums.begin()+i);
            }
            // if(nums[i]==nums[i+1])
            // {
            //     nums.erase(nums.begin()+i);
            //     // i++;
            // }
        }
        return nums.size();
    }
};