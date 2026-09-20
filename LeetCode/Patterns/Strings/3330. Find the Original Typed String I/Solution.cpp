class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int> mp;
        int i,res=1;
        for(i=0;i<word.size();i++)
        {
            mp[word[i]]++;
        }
        for(auto x:mp)
        {
            res=res+(x.second-1);
        }
        return res;
    }
};