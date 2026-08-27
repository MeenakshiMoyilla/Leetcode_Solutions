class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,char> mp1;
        int i;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]=t[i];
            mp1[t[i]]=s[i];
        }
        for(auto x: mp)
        cout<<x.first<<" "<<x.second<<endl;
        for(i=0;i<s.size();i++)
        {
            if(t[i]==mp[s[i]] && s[i]==mp1[t[i]]) {}
            else        return false;
        }
        return true;
    }
};