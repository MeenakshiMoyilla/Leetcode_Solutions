class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        int i;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]=t[i];
        }
        for(i=0;i<s.size();i++)
        {
            if(t[i]==mp[s[i]]) {}
            else        return false;
        }
        return true;
    }
};