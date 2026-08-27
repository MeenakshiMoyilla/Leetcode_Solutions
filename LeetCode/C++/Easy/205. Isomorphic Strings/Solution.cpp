class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> mp1;
        int i;
        for(i=0;i<s.size();i++)  {
            if(mp.find(s[i])==mp.end())       mp[s[i]]=t[i];
            if(mp1.find(t[i])==mp1.end())        mp1[t[i]]=s[i];
        }

        for(i=0;i<s.size();i++) {
            if(t[i]==mp[s[i]] && s[i]==mp1[t[i]]) {}
            else        return false;
        }
        return true;
    }
};