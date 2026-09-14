class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int i,f=0,n=prices.size();
        vector<int> ans(n,-1);
        stack<int> st;
        st.push(prices[n-1]);

        for(i=n-2;i>=0;i--)
        {
            f=0;
            if(st.top()<=prices[i])             ans[i]=st.top();
            
            else{
                while(!st.empty() && f==0){
                    if(st.top()<=prices[i]){
                        ans[i]=st.top();
                        f++;
                    }
                    else                  st.pop();
                }
            }

            st.push(prices[i]);
        }
        for(i=0;i<n;i++){
            if(ans[i]!=-1)
            ans[i]=prices[i]-ans[i];
            else
            ans[i]=prices[i];
        }
        return ans;
    }
};