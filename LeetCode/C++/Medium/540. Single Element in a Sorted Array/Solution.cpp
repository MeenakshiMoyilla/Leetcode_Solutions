class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int low=0,high=nums.size()-1;
        // while(low<=high)
        // {
        //     int mid=low+(high-low)/2;
        //     if()
        // }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])  return nums[i];
            else                    i++;
        }
        return -1;
    }
};