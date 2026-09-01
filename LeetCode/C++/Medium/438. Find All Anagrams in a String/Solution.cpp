class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        if(s.size()<p.size())   return v;
        int i,p1=p.size(),s1=s.size();
        unordered_map<char,int> ph;
        unordered_map<char,int> sh;
        for(i=0;i<p1;i++)           ph[p[i]]++;
        for(i=0;i<p1;i++)           sh[s[i]]++;
        if(ph==sh)                  v.push_back(0);
        for(i=p1;i<s1;i++)
        {
            // cout<<s[i-p1]<<"  "<<s[i]<<endl;
            sh[s[i-p1]]--;
            if(sh[s[i-p1]]==0)  sh.erase(s[i-p1]);
            sh[s[i]]++;
            if(sh==ph)  v.push_back(i-p1+1);
        }
        // vector<int> v;
        return v;
    }
};