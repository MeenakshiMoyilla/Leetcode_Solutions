class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i,n=temperatures.size(),f=0;
        vector<int> nge(n,-1);
        vector<int> ans(n,0);
        stack<int> st;
        stack<int> idx;
        st.push(temperatures[n-1]);
        idx.push(n-1);
        for(i=n-2;i>=0;i--){
            f=0;
            if(!st.empty() && temperatures[i]<st.top()){
            nge[i]=st.top();
            ans[i]=idx.top();
            }
            else{
                while(!st.empty() && f==0){
                    if(temperatures[i]<st.top()){
                        nge[i]=st.top();
                        ans[i]=idx.top();
                        f++;
                    }
                    else{
                        st.pop();
                        idx.pop();
                    }
                }

            }
            st.push(temperatures[i]);
            idx.push(i);
        }
        for(i=0;i<n;i++)
        {
            if(ans[i]!=0)
            ans[i]=ans[i]-i;
        }
        return ans;

    }
};