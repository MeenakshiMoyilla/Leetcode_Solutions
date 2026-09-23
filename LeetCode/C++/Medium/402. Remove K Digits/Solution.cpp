class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        stack<int> st;
        int i,cnt=0;
        for(i=0;i<num.size();i++)
        {
            if(!st.empty() && cnt<k)
            {
                int a=num[i]-'0';
                if(st.top()>a ){
                st.pop();
                st.push(a);
                cnt++;
                }
                else st.push(a);
            }
            else
            {
               
                int a=num[i]-'0';
                st.push(a);
            }
        }
        while(!st.empty())
        {
            cout<<st.top()<<"  ";
            // int res=res*st.top()
            s+=to_string(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        i=0;
        if(s.size()>1){
        for(i=0;i<s.size()-1;)
        {
            if(s[i]-'0'==0)
            {
                s.erase(s.begin()+i);
            }
            else break;
        }
        }

        return s;
    }
};