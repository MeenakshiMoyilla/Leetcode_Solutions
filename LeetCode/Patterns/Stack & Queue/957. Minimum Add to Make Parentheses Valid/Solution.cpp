class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            st.push('(');
            else
            {
                if(!st.empty() && st.top()=='(')
                st.pop();
                else
                st.push(')');
            }
        }
        return st.size();
    }
};