class Solution 
{
    public:
    int longestPalindrome(string s) 
    {
        int i,even=0,odd=0,count=0,a=0;
        unordered_map<char,int> mp;
        for(i=0;i<s.size();i++)            mp[s[i]]++;
        for(auto x:mp)        
        {
            if(x.second%2!=0)
            {
                odd=odd+x.second;
                count++;
                a++;
            }
            if(x.second%2==0)       even+=x.second;  
        }
        if(a>0)        return even+odd+1-count;
        return even;
    }
};