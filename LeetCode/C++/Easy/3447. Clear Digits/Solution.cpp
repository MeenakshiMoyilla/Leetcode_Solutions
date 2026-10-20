class Solution {
public:
    bool isdigit(char c){
        return c>='0' && c<='9';
    }
    string clearDigits(string s) {
        stack<char> st;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            st.pop();
            else                
            st.push(s[i]);   
        }
        string s1="";
        int a=st.size();
        for(i=0;i<a;i++){
            s1.push_back(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};