class Solution {
public:
    bool isValid(string s) 
    {
        int i;
        stack<char> st;
        if(s[0]==')' || s[0]=='}' ||  s[0]==']')
        return false;
        else
        {
            for(i=0;i<s.size();i++)
            {
                if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                {
                    st.push(s[i]);
                // break;
                }
                if(st.empty())
                {
                    if(s[i]==']' || s[i]=='}' || s[i]==')')
                    return false;
                }

                if(s[i]==')')
                {
                    if(st.top()=='(')      st.pop();
                    else return false;
                }          
                if(s[i]==']')
                {
                    if(st.top()=='[')      st.pop(); 
                    else return false;
                }
                if(s[i]=='}')
                {
                    if(st.top()=='{')      st.pop();
                    else    return false;
                }
            }
            if(st.empty())          return true;
            else
            {
            //  while(!st.empty()) 
            // {
            //     cout << st.top() << " ";
            //     st.pop();
            // }                    
                return false;
            } 
        } 
              
    }
};