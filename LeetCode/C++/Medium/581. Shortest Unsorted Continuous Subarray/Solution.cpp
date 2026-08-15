class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left=0,right=0,count=0,i;
        for(i=1;i<nums.size();i++)
        {
            if(count!=0 && nums[i]<nums[i-1])
            {
                right=i+1;
            }
            if(nums[i]<nums[i-1] && count==0)
            {
                // cout<<nums[i]<<"  "<<nums[i-1];
                left=i-1;
                right=i;
                count++;
            }
            

        }
        // cout<<right<<"  "<<left;
        return  right-left;
    }
};