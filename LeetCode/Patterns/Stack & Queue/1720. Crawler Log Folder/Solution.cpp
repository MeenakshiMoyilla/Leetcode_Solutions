class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int> st;
        int i;

        for(i=0;i<logs.size();i++)
        {
            if(logs[i][0]=='.' && logs[i][1]=='/')
            {

            }
            else if(logs[i][0]=='.' && logs[i][1]=='.' && logs[i][2]=='/' )
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            st.push(1);
        }
        return st.size();
    }
};