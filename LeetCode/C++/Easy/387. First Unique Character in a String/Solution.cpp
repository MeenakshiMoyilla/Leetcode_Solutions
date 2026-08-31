class Solution {
    public:
    int firstUniqChar(string s){
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();)
        {
            if(it->second>1)   it= mp.erase(it);
            else                ++it;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])!=mp.end())     return i;
        }
        return -1;
    }
};