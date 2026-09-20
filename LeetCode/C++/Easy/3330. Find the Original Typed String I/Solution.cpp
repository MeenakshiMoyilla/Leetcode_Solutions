class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int> mp;
        int i,res=1,n=word.size();
        mp[word[0]]++;
        for(i=1;i<n;i++)
        {
            if(word[i]==word[i-1])
            {
                mp[word[i]]++;
            }
            else
            {
                res=res+(mp[word[i-1]]-1);
                mp.erase(word[i-1]);
                mp[word[i]]++;
                // cout<<i<<"  "<<res<<endl;
            }
        }
        // cout<<mp[word[n-1]]<<endl;
        res=res+(mp[word[n-1]]-1);
        cout<<res<<endl;
        
        // for(auto x:mp)             res=res+(x.second-1);

        return res;
    }
};