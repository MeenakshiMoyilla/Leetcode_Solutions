class Solution 
{
    public:
    string removeOuterParentheses(string s) 
    {
        int i,sum=1,count=0;
        stack<char> st;
        string res;
        for(i=1;i<s.size();i++)
        {
            st.push(s[i]);            
            if(s[i]=='(')   sum++;
            else            sum--;
            if(count==1) {
                st.pop();  
                count=0; 
            } 
            if(sum==0) {
                st.pop(); 
                count++;     
            }        
        }  

        // cout<<st.size(); 
        while(!st.empty())
        {
            // cout<<st.top()<<"  ";
            res.push_back(st.top());
            st.pop();
        } 
        // cout<<res.si
        reverse(res.begin(),res.end());

        return res;
    }
};