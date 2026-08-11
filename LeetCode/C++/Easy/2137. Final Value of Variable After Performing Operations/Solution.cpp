class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int len=operations.size(),sum=0;
        for(int i=0;i<len;i++)
        {
            if(operations[i]=="--X" || operations[i]=="X--")
            {
                sum=sum-1;
            }
            else
            {
                sum=sum+1;
            }
        }      
        return sum;
    }
};