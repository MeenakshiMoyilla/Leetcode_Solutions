class Solution 
{
    public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int> v;
        int i,j,cou;
        for(i=0;i<nums.size();i++)
        { cou=0;
            for(j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    cou++;
                }

            }
            v.push_back(cou);
        }  
        return v;                      
    }
};