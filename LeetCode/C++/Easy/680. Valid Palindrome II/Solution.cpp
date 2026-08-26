class Solution {
public:
    bool validPalindrome(string s) {
        unordered_map<char,int> mp;
        int i,odd=0;
        for(i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto x:mp)
        {
            if(x.second%2!=0)      odd++;
            // else                    odd++;
        }
        if(odd<3)   return true;
        return false;
    }
};