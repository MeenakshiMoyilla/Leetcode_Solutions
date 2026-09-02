class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0,j=matrix[0].size(),k=matrix.size(),l=0,x;
        vector<int> res;
        int a=1,b=0,c=0,d=0;
        while(i<k && l<j)
        {
            // cout<<"hello";
            if(a==1){
            for(x=l;x<j;x++)
            {
                res.push_back(matrix[i][x]);
            }
            b=1;
            }
            i++; //i=1 
            if(b==1){
            for(x=i;x<k;x++)
            {
                res.push_back(matrix[x][j-1]);
            }
            c=1;
            }
            j--;
            if(c==1 && j>i){
            for(x=j-1;x>=l;x--)
            {
                res.push_back(matrix[k-1][x]);
            }
            d=1;
            }
            k--;
            if(d==1 && k>l){
            for(x=k-1;x>=i;x--)
            {
                res.push_back(matrix[x][l]);
            }
            a=1,b=0,c=0,d=0;
            }
            // i++;
            // j--;
            // k--;
            l++;
        }
        return res;
    }
};