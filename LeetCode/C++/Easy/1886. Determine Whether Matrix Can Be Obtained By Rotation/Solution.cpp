class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i,j,k;
        if(mat==target) return true;
        for(i=0;i<3;i++)
        {
            reverse(mat.begin(),mat.end());
            for(j=0;j<mat.size();j++)
            {
                for(k=j+1;k<mat.size();k++)
                {
                    swap(mat[j][k],mat[k][j]);
                }
            }
            if(mat==target) return true;
        }
        return false;
    }
};