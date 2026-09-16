class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        stack<int> st2;
        // vector<int> v;
        int i;

        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
                // i++;
            }
            else if(s[i]==')')
            {
                if(!st.empty())
                st.pop();
                else
                st2.push(i);
            }
            // else i++;

        }
        cout<<st.size();
        for(i=s.size()-1;i>=0;i--)
        {
            // cout<<i<<" ";
            // cout</<i<<" ";
            // i--;
            if(!st.empty() && st.top()==i)
            {
                // cout<<i<<" "<<st.top()<<" ";
                s.erase(s.begin()+i);
                st.pop();
            }
            if(!st2.empty() && st2.top()==i)
            {
                s.erase(s.begin()+i);
                st2.pop();
            }
            // else i--;
        }
        return s;
    }
};