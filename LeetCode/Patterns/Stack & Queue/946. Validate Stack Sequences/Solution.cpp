class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j=0;
        stack<int> st;
        // st.push(pushed[0]);
        // if(popped[0]==st.top()){
        // st.pop();
        // j++;
        // }
        for(i=0;i<pushed.size();i++)
        {
            st.push(pushed[i]);
            if(!st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
        }
        // cout<<popped[j]<<" "<<st.top();
        for(i=j;i<popped.size();i++)
        {
            if(!st.empty() && st.top()==popped[i])
            {
                st.pop();                
            }
        }
        
        return st.empty();
    }
};