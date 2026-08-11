class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.contains(s[i]))
            {
                mp[s[i]]++;
                if(mp[s[i]]==2) return s[i];
            }
            else mp[s[i]]=1;
            
        }
        return 'o';
    }
};