class Solution 
{
    public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int i,j,sum=0,max=-99999999;
        for(i=0;i<accounts.size();i++)
        {
            sum=0;
            for(j=0;j<accounts[i].size();j++)
            {
                sum=sum+accounts[i][j];
            }
            if(max<sum)
            {
                max=sum;
            }            
        }               
        return max; 
    }
};