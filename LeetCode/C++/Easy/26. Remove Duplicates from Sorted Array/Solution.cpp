class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,left=0,right=1;
        while(right<nums.size())
        {
            if(nums[left]==nums[right]) 
            {
                nums.erase(nums.begin()+right);
            }
            else
            {
                left++;
                right++;
            }
        }
        // for(i=0;i<nums.size();)
        // {
        //     if()
        //     // int freq=count(nums.begin(),nums.end(),nums[i]);
        //     // for(j=0;j<freq-1;j++)
        //     // {
        //     //     nums.erase(nums.begin()+i);
        //     // }
        //     // if(nums[i]==nums[i+1])
        //     // {
        //     //     nums.erase(nums.begin()+i);
        //     //     // i++;
        //     // }
        // }
        // cout<<nums.size();
        return nums.size();
    }
};