class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0,j=matrix[0].size(),k=matrix.size(),l=0,x;
        vector<int> res;
        int a=1,b=0,c=0,d=0;
        while(i<k && l<j)
        {
            if(a==1)
            {
                for(x=l;x<j;x++)
                {
                    res.push_back(matrix[i][x]);
                    b++;
                }
            }
            i++;  
            if(b>0)
            {
                for(x=i;x<k;x++)
                {
                    res.push_back(matrix[x][j-1]);
                    c++;
                }
            }
            j--;
            if(c>0)
            {
                for(x=j-1;x>=l;x--)
                {
                    res.push_back(matrix[k-1][x]);
                    d++;
                }
            }
            k--;
            if(d>0)
            {
                for(x=k-1;x>=i;x--)
                {
                    res.push_back(matrix[x][l]);
                }
                a=1,b=0,c=0,d=0;
            }
            l++;
        }
        return res;
    }
};