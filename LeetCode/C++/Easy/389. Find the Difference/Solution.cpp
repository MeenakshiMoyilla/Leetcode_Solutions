class Solution {
public:
    char findTheDifference(string s, string t)
    {
        // char a='a';
        int len=s.size(),i;
        for(i=0;i<len;i++)
        {
            int x=t.find(s[i]);
            t.erase(t.begin()+x);
        }
        // cout<<t;
        // char a=t[0];
        return t[0];
    }
};