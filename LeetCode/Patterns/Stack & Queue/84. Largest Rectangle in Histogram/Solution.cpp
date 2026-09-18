class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(),i,current=0,maxi=0;
        vector<int> nse(n);
        vector<int> pge(n);
        stack<int> st;
        stack<int> st2;

        for(i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()!=-1 &&  heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                nse[i]=-1;
            }
            else
            {
                nse[i]=st.top();
            }
            st.push(i);
        }
        // st.clear();
        for(i=0;i<n;i++)
        {
            while(!st2.empty() && st2.top()!=1 && heights[st2.top()]<=heights[i])
            {
                st2.pop();
            }
            if(st2.empty())
            {
                pge[i]=-1;
            }
            else
            {
                pge[i]=st2.top();
            }
            st2.push(i);
        }
        for(i=0;i<n;i++)
        {
            cout<<pge[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            if(nse[i]!=-1)
            current=heights[i]*(nse[i]-i);
            else
            current=heights[i]*(n-i);
            maxi=max(current,maxi);
        }
        return maxi;
    }
};