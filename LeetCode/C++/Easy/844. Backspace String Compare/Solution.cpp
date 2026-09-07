class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(!st1.empty())    st1.pop();
            }
            // st
            else
            st1.push(s[i]);
        }
        for(i=0;i<t.size();i++)
        {
            if(t[i]=='#'){
            if( !(st2.empty()))
            st2.pop();
            }
            else
            st2.push(t[i]);
        }
        return st1==st2;
    }
};