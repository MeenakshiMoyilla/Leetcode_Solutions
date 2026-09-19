class Solution {
public:
    int characterReplacement(string s, int k) {
        int r,l=0,sum=0,res=0,maxi=INT_MIN;
        unordered_map<char,int> mp;

        for(r=0;r<s.size();r++){
            mp[s[r]]++;
            sum++;
            maxi=max(maxi,mp[s[r]]);
            if(sum-maxi<=k)
            {
                res=max(r-l+1,res);
            }
            else
            {
                while(sum-maxi>k)
                {
                    sum--;
                    mp[s[l]]--;
                    l++;
                }
                // shrink
            }
        }
        return res;
        return 0;
    }
};