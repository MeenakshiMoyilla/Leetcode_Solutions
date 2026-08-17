class Solution 
{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int i,maxcount=0,count=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==1)            {
                count=count+1;
                maxcount=max(count,maxcount);
            }            
            else{
                count=0;
            }
        } 
        return maxcount;       
    }
};