class Solution 
{
    public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> v;
        int len=nums.size(),i,count=0,j,k;
        for(i=0;i<len;i++)
        {
            if(nums[i]==0) 
            {
                count++;
            }
            else
            {
                v.push_back(nums[i]);
            }
        }  
        for(j=0;j<count;j++)
        {
            v.push_back(0);
        }
        // cout<<"[";
        nums.clear();
        for(k=0;k<len;k++) 
        {
            nums.push_back(v[k]); 
        }
        // cout<<"]";
    }
};