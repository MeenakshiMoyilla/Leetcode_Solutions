class Solution {
public:
    int longestPalindrome(string s) {
        int i,res=0,count=0;
        unordered_map<char,int> mp;
        for(i=0;i<s.size();i++)            mp[s[i]]++;
        for(auto x:mp)        {
            // sum=sum+x.second;
            if((x.second%2!=0 && count==0) || x.second%2==0){
                cout<<x.first<<"  "<<x.second<<endl;
                if(x.second%2!=0)    count++;
                res+=x.second;
            }
        }
        return res;
    }
};