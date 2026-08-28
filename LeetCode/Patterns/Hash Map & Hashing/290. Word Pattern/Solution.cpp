class Solution 
{
    public:
    bool wordPattern(string pattern, string s) 
    {
        int i,j=0;
        unordered_map<char,string> mp;
        s+=' ';
        string s1;
        for(i=0;i<s.size();i++){
            if(s[i]!=' ')      s1+=s[i];
            
            else{
                if(mp.find(pattern[j])==mp.end()){
                    mp[pattern[j]]=s1;
                    j++;
                }
                else
                {
                    if(mp[pattern[j]]!=s1)
                    {
                        cout<<s1<<endl;
                        return false;
                    }  
                    else                    j++;
                }
                s1.clear();
            }
        }
        // for(i=0;i<pattern.size();i++)
        // {
        //     i
        // }
        // for(auto x: mp)
        // {
        //     cout<<x.first<<"  "<<x.second<<endl;
        // }
        return true;
    }
};