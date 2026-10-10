class Solution {
public:
    int findTheWinner(int n, int k) {
        int  idx=0,i;
        vector<int> v(n);
        for(i=1;i<n+1;i++)   v[i-1]=i;

        while(v.size()>1)
        {
            idx=(idx+k-1)%v.size();
            v.erase(v.begin()+idx);
        }
        return v[0];
    }
};