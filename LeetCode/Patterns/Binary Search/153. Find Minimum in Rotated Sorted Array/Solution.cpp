class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1,min=9999;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(min>nums[mid])                min=nums[mid];
            if(nums[low]<=nums[high])            high=mid-1;
            else if(nums[low]<=nums[mid])         low=mid+1;
            else                             high=mid-1;
        }
        return min;
    }
};