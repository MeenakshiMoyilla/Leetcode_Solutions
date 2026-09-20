class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        stack<int> st;
        stack<int> st2;
        st.push(nums[0]);
        int i,n=nums.size(),a=0,b=0;
        st2.push(nums[n-1]);

        for(i=1;i<n;i++){
            while(!st.empty() && nums[i]<=st.top()){
                st.pop();
                a++;
                // if(a>1) return false;
            }
            st.push(nums[i]);
        }

        for(i=n-2;i>=0;i--){
            while(!st.empty() && nums[i]>=st.top()){
                st.pop();
                b++;
                // if(a>1) return false;
            }
            st.push(nums[i]);
        }
        if(a>1 && b>1)  return false;

        return true;
    }
};