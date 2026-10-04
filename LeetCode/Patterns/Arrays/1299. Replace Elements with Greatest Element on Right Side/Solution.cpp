class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i,n=arr.size();
        // vector<int> res(n);
        stack<int> st;

        for(i=n-1;i>=0;i--)
        {
            if(!st.empty() && st.top()>arr[i])
            st.push(st.top());
            else
            { st.push(arr[i]);
            }
        }
        st.pop();
        for(i=0;i<n-1;i++)
        {
            arr[i]=st.top();
            st.pop();
        }
        arr[n-1]=-1;
        return arr;
    }
};