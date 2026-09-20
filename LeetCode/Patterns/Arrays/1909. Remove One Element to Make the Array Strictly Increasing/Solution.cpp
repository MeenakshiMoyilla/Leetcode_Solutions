class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        stack<int> st;
        st.push(nums[0]);
        int i,n=nums.size(),a=0;

        for(i=1;i<n;i++)
        {
            while(!st.empty() && nums[i]<=st.top())
            {
                // cout<<nums[i]<<" "<<st.top();
                st.pop();
                a++;
                if(a>1) return false;
            }

            st.push(nums[i]);
        }
        return true;
    }
};