class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        reverse(matrix.begin(),matrix.end());
        for(i=1;i<matrix.size();i++)
        {
            for(j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};