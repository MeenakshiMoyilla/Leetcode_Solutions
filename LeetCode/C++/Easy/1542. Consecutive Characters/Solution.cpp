class Solution {
public:
    int maxPower(string s) {
        int count=1,maxi=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
                maxi=max(count,maxi);
            }
            else    count=1;
        }
        return maxi;
    }
};