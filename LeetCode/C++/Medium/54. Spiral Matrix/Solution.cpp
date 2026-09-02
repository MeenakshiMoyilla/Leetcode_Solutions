class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0,right=matrix[0].size(),bottom=matrix.size(),left=0,i;
        vector<int> res;
        int f1=1,f2=0,f3=0,f4=0;
        while(top<bottom && left<right)
        {
            if(f1==1)
            {
                for(i=left;i<right;i++)
                {
                    res.push_back(matrix[top][i]);
                    f2++;
                }
            }
            top++;  
            if(f2>0)
            {
                for(i=top;i<bottom;i++)
                {
                    res.push_back(matrix[i][right-1]);
                    f3++;
                }
            }
            right--;
            if(f3>0)
            {
                for(i=right-1;i>=left;i--)
                {
                    res.push_back(matrix[bottom-1][i]);
                    f4++;
                }
            }
            bottom--;
            if(f4>0)
            {
                for(i=bottom-1;i>=top;i--)
                {
                    res.push_back(matrix[i][left]);
                }
                f1=1,f2=0,f3=0,f4=0;
            }
            left++;
        }
        return res;
    }
};