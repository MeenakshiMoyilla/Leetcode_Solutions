class Solution {
public:
    bool isVowel(char a)
    {
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')  return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int i,maxi=INT_MIN,count=0;
        for(i=0;i<k;i++)
        {
            if(isVowel(s[i]))
            {
                count++;
                maxi=max(maxi,count);
            }            
            
        }
        for(i=k;i<s.size();i++)
            {
                if(isVowel(s[i]))   count++;
                if(isVowel(s[i-k]))  count--;
                maxi=max(maxi,count);
            }
        return maxi;
    }
};