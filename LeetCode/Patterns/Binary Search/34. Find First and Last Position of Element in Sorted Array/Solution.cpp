class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,x=-1,y=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                x=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
            low=mid+1;
            else    high=mid-1;
        }
        low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                y=mid;
                low=mid+1;
                // high=mid-1;
            }
            else if(nums[mid]<target)        low=mid+1;
            else    high=mid-1;
        }
        return {x,y};
    }
};