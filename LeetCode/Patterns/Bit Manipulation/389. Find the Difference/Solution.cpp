class Solution {
public:
    char findTheDifference(string s, string t){
        int i;
        unordered_map<char,int> mp;
        unordered_map<char,int> mp1;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp1[t[i]]++;
        }
        mp1[t[t.size()-1]]++;
        for(auto x: mp1)
        {
            if(mp.find(x.first)==mp.end())  return x.first;
        }
        return 'a';
    }
};