class Solution 
{
    public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int low=0,high=nums.size()-1;
        auto a=find(nums.begin(),nums.end(),target);
        // cout<<a;
        if(a!=nums.end())
        {
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
                break;
            }
            else if(nums[mid]<target)
            low=mid+1;
            else
            {
                high=mid-1;
            }
        } 
        }
        else 
        {
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(nums[mid]==target)
                {
                    return mid;
                    break;
                }
                else if(nums[mid]<target)
                low=mid+1;
                else
                {
                    high=mid-1;
                }
            } 
            return 1;    
        }
        return 0; 
    }
};