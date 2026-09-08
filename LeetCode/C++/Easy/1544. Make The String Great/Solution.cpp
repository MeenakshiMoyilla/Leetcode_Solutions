class Solution {
public:
    char lowerUppercase(char c)
    {
        if(c>='a' && c<='z')
        return char(c-32);
        return char(c+32);
    }
    string makeGood(string s) {
        stack <char> st;
        string res;
        st.push(s[s.size()-1]);
        int i;
        for(i=s.size()-2;i>=0;i--){
            char c=lowerUppercase(s[i]);
            if(!(st.empty())  && c==st.top() ) 
            {
                // if(!st.empty())
                // {
                    st.pop();
                // }
            }
            else    st.push(s[i]);
        }
        // cout<<st.empty();
        while(!st.empty())
        {
            // cout<<st.top()<<" ";
            res+=st.top();
            st.pop();
        }
        return res;
    }
};