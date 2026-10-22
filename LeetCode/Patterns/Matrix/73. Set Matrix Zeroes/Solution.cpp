class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j,m=matrix.size(),n=matrix[i].size(),rowZeroes=0,colZeroes=0;
        int a=0;
    
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]==0 && i==0 && j==0) a++;
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }   
        for(i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                colZeroes++;
                for(j=1;j<n;j++)
                matrix[i][j]=0;
            }
        }
        for(j=1;j<n;j++)
        {
            if(matrix[0][j]==0)
            {
                rowZeroes++;
                for(i=1;i<m;i++)
                matrix[i][j]=0;
            }
        }
        if((colZeroes>0 && matrix[0][0]==0) || a>0)
        {
            for(i=1;i<m;i++)    matrix[i][0]=0;
        }
        if((rowZeroes>0 && matrix[0][0]==0) || a>0)
        {
            for(j=1;j<n;j++)    matrix[0][j]=0;
        }
    }
};