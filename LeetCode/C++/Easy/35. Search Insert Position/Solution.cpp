class Solution 
{
    public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int mid,low=0,high=nums.size()-1;  
        auto a=find(nums.begin(),nums.end(),target);
        // if(a!=nums.end())
        // {    
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]==target)     return mid;
            else if(nums[mid]<target)    low=mid+1;
            else    high=mid-1;
        }  
        return low;
        // }
        // else
        // {
        //     if(target<nums[0]) return 0;
        //     else if(target>nums[nums.size()-1]) return nums.size();
        //     else
        //     {
        //     for(int i=1;i<nums.size();i++)
        //     {
        //         if(target>nums[i-1] && target<nums[i]);
        //         return i;
        //     }
        //     }
        // }
        // return 0;
    }
};