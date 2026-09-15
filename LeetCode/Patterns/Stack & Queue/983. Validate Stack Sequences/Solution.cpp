class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j=0;
        stack<int> st;

        for(i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            while(!st.empty() && st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        // for(i=j;i<popped.size();i++){
        //     if(!st.empty() && st.top()==popped[i])
        //         st.pop();                
        // }
        
        return st.empty();
    }
};