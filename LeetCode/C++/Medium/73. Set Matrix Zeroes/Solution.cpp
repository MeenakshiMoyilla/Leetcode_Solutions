class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows;
        unordered_set<int> col;
        int i,j;
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int x:rows)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                matrix[x][j]=0;
            }
        }
        for(i=0;i<matrix.size();i++)
        {
            for(int x: col)     matrix[i][x]=0;
        }
    }
};