class Solution 
{
    public:
    vector<int> runningSum(vector<int>& nums) 
    {
        // int sum=0,i;
        // vector<int> v;
        // for(i=0;i<nums.size();i++)
        // {
        //     sum=sum+nums[i];
        //     v.push_back(sum);
        // }    
        // return v;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};