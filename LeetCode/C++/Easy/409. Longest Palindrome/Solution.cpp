class Solution {
public:
    int longestPalindrome(string s) {
        int i,res=0,maxi=INT_MIN;
        unordered_map<char,int> mp;
        for(i=0;i<s.size();i++)            mp[s[i]]++;
        for(auto x:mp)        {
            if(x.second%2!=0)
                if(maxi<x.second)   maxi=x.second;
            if(x.second%2==0)       res+=x.second;
        }
        return res+maxi;
    }
};