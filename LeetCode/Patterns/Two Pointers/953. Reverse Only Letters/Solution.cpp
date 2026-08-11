class Solution {
public:
    bool isletter(char c)
    {
        int a=c;
        if((c>=65 && c<=90) || (c>=97 && c<=122))   return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        int low=0,high=s.size()-1;
        while(low<high)
        {
            if(!isletter(s[low]))
            low++;
            else if(!isletter(s[high]))
            high--;
            else
            {
                swap(s[low],s[high]);
                low++;
                high--;
            }
        }
        return s;
    }
};