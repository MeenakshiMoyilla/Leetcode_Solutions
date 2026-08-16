class Solution {
public:
    int longestPalindrome(string s) {
        int i,res=0,count=0;
        unordered_map<char,int> mp;
        for(i=0;i<s.size();i++)            mp[s[i]]++;
        for(auto x:mp)        {
            // sum=sum+x.second;
            if((x.first%2!=0 && count==0) || x.first%2==0){
                if(x.first%2!=0)    count++;
                res+=x.second;
            }
        }
        return res;
    }
};