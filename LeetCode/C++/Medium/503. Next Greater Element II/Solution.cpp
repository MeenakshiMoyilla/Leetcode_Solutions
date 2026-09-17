class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,n=nums.size();
        vector<int> v(2*n);
        vector<int> ans(2*n,-1);
        stack<int> st;
        for(i=0;i<2*n;i++)
        {
            v[i]=nums[i%n];
        }
        st.push(v[2*n-1]);
        for(i=2*n-2;i>=0;i--)
        {
            if(!st.empty() && st.top()>v[i])
            {
                ans[i]=st.top();
                st.push(v[i]);
            }
            else
            {
                int f=0;
                while(!st.empty() && f==0)
                {
                    if(st.top()>v[i])
                    {
                        ans[i]=st.top();
                        f++;
                    }
                    else
                    {
                        st.pop();
                    }
                }
                st.push(v[i]);
            }
        }
        ans.resize(n);
        return ans;
    }
};