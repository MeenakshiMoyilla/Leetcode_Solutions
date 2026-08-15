class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // for(i=0;i<)
        int i;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        if(s1.size()>s2.size()) return false;
        int a=s1.size(),b=s2.size();
        for(i=0;i<a;i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if(m1==m2)  return true;
        for(i=a;i<b;i++)
        {  
            m2[s2[i]]++;
            if(m2[s2[i-a]]==1)  m2.erase(s2[i-a]);
            else                m2[s2[i-a]]--;
            if(m1==m2)  return true;
        }
        return false;
    }
};