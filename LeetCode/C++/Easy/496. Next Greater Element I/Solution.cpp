class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size(),m=nums1.size(),i,f=0;
        unordered_map<int,int> mp;
        vector<int> ans(m);
        vector<int> nge(n,-1);
        stack<int> st;
        st.push(nums2[n-1]);
        for(i=n-2;i>=0;i--)
        {
            f=0;
            if(!st.empty() && nums2[i]<st.top()){
                nge[i]=st.top();
                st.push(nums2[i]);
            }
            else{
                while(!st.empty() &&  f==0){
                    if(nums2[i]<st.top()){
                        nge[i]=st.top();
                        f++;
                    }
                    else{
                        st.pop();
                    }
                }
                st.push(nums2[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            // cout<<v[i]<<"  ";
            mp[nums2[i]]=nge[i];
        }
        for(i=0;i<m;i++)
        {
            ans[i]=mp[nums1[i]];
        }
        return ans;
    }
};