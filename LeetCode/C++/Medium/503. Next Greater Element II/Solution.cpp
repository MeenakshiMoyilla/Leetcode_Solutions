class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int i,n=nums.size();
        if(n==1)
        {
            vector<int> v(n,-1);
            return v;
        }
        nums.resize(2*n);
        stack<int> st;
        int m=nums.size();
        vector<int> ans(m,-1);
        st.push(nums[m-1]);

        for(i=0;i<n;i++)           nums[n+i]=nums[i];
        // for(i=0;i<m;i++)
        // {
        //     cout<<ans[i]<<"  ";
        // }
        for(i=m-2;i>=0;i--)
        {
            if(!st.empty() && st.top()>nums[i])
            {
                ans[i]=st.top();
                st.push(nums[i]);
            }
            else
            {
                int f=0;
                while(!st.empty() && f==0)
                {
                    if(st.top()>nums[i])
                    {
                        ans[i]=st.top();
                        f++;
                    }
                    else
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        vector<int> ans2(ans.begin(),ans.begin()+n);
        // for(i=0;i<n;i++)
        // {
        //     cout<<ans[i]<<"  ";
        // }
        return ans2;
    }
};