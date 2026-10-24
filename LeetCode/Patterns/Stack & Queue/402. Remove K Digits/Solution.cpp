class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.size())   return "0";
        string s;
        stack<int> st;
        int i,cnt=0;
        for(i=0;i<num.size();i++){
            int a=num[i]-'0';

            if(!st.empty() && cnt<k){
                if(st.top()>a ){
                st.pop();
                cnt++;
                }
            }

            st.push(a);
        }

        while(!st.empty()){
            s+=to_string(st.top());
            st.pop();
        }

        reverse(s.begin(),s.end());

        if(s.size()>1){
        for(i=0;i<s.size()-1;){
            if(s[i]-'0'==0){
                s.erase(s.begin()+i);
            }
            else break;
        }
        }

        return s;
    }
};