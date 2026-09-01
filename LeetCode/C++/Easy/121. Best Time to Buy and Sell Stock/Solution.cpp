class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,n=prices.size(),maxi=0;
        vector<int> v(n);
        v[n-1]=prices[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(v[i+1]<prices[i])  v[i]=prices[i];
            else                  v[i]=v[i+1];
        }
        for(i=0;i<n-1;i++)
        {
            // cout<<v[i]<<"  ";
            int a=v[i+1]-prices[i];
            maxi=max(maxi,a);
        }
        return maxi;

    }
};