class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0,j=matrix[0].size(),k=matrix.size(),l=0,x;
        vector<int> res;
        while(i<k && l<j)
        {
            // cout<<"hello";
            for(x=l;x<j;x++)
            {
                res.push_back(matrix[i][x]);
            }
            i++; //i=1 
            for(x=i;x<k;x++)
            {
                res.push_back(matrix[x][j-1]);
            }
            j--;
            if(j>i){
            for(x=j-1;x>=l;x--)
            {
                res.push_back(matrix[k-1][x]);
            }
            }
            k--;
            for(x=k-1;x>=i;x--)
            {
                res.push_back(matrix[x][l]);
            }
            // i++;
            // j--;
            // k--;
            l++;
        }
        return res;
    }
};