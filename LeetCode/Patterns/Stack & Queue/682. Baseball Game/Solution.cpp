class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> st;
        int i,res=0;

        for(i=0;i<operations.size();i++)
        {
            if(operations[i][0]=='D'){
                string a=st.top();
                int num=stoi(a)*2;
                string b=to_string(num);
                st.push(b);
            }
            else if(operations[i][0]=='C'){
                st.pop();
            }
            else if(operations[i][0]=='+'){
                string a = st.top();
                st.pop();
                string b = st.top();
                int num=stoi(a)+stoi(b);
                string c= to_string(num);
                st.push(a);
                st.push(c);
            }
            else{
                st.push(operations[i]);
            }
        }

        while(!st.empty())
        {
            int num=stoi(st.top());
            st.pop();
            res=res+num;
        }
        return res;
    }
};