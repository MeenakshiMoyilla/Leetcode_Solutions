class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        int i,open=0,close=0;

        for(i=0;i<s.size();i++){
            if(s[i]==')'){
                if(!st.empty())    st.pop();
                else                close++;
            }
            else if(s[i]=='(')         st.push(')');
        }

        open=st.size();
        
        for(i=0;i<s.size();){
            if(s[i]=='(' && open>0){
                s.erase(s.begin()+i);
                open--;
            }
            else if(s[i]==')' && close>0){
                s.erase(s.begin()+i);
                close--;
            }
            else i++;
        }
        return s;
    }
};