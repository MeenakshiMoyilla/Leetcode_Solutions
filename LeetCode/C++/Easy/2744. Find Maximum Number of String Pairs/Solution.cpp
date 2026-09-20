class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int i,pairs=0;
        unordered_map<string,int> mp;
        for(i=0;i<words.size();i++)
        {
            sort(words[i].begin(),words[i].end());
            mp[words[i]]++;
        }
        for(auto x: mp)
        {
            if(x.second>1)
            pairs++;
        }
        return pairs;
    }
};