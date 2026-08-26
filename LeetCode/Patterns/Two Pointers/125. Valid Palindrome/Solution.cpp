class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        int i;
        for(i=0;i<s.size();i++)        {
            if(s[i]>=65 && s[i]<=90)           s1+=32+s[i];
            else if(s[i]>=97 && s[i]<=122)  s1+=s[i];
            else if(s[i]>=48 && s[i]<=57)   s1+=s[i];
            else        continue;
        }
        for(i=0;i<s1.size()/2;i++)        {
            int left=i,right=s1.size()-1-i;
            if(s1[left]!=s1[right])  return false;
        }
        return true;

    }
};