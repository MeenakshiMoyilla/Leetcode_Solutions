class Solution {
public:
    int longestPalindrome(string s) {
        int i,count=0,res=0,sum=0;
        unordered_map<char,int> mp;
        for(i=0;i<s.size();i++)            mp[s[i]]++;
        for(auto x:mp)
        {
            cout<<x.first<<"  "<<x.second<<endl;
            sum=sum+x.second;
            if((x.first%2!=0 && count==0) || x.first%2==0){
                if(x.first%2!=0)    count++;
                res+=x.second;
            }
            // res=res+x.second;
            // count++;
            // if(x.first%2!=0 && count>0)     res++;
        }
        return res;
    }
};