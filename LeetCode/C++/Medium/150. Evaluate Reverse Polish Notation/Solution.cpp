class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res=0,i;
        for(i=0;i<tokens.size();i++)
        {
            if(tokens[i][0]=='+')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(a+b);
            }
            else if(tokens[i][0]=='/')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b/a);
            }
            else if(tokens[i][0]=='*')
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(a*b);
            }
            else if(tokens[i][0]=='-' && tokens[i].size()==1)
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b-a);
            }
            
            else
            {
                int num=stoi(tokens[i]);
                st.push(num);
            }
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};