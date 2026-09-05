class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> v(s.size());
        vector<int> diff(s.size()+1,0);
        vector<int> prefix(s.size());
        string res;
        int i=0;
        // cout<<s.size();
        for(i=0;i<s.size();i++){
            v[i]=s[i];
        }
        for(i=0;i<shifts.size();i++)
        {
            int left=shifts[i][0];
            int right=shifts[i][1];
            int direc=shifts[i][2];
            if(direc==1)
            {
                diff[left]+=1;
                diff[right+1]-=1;
                
            }
            else
            {
                diff[left]-=1;
                diff[right+1]+=1;
            }
        }
        prefix[0]=diff[0];
        v[0]=v[0]+prefix[0];
        for(i=1;i<s.size();i++)
        {
            prefix[i]=prefix[i-1]+diff[i];
            v[i]=v[i]+prefix[i];
        }
        for(i=0;i<s.size();i++)
        {
            if(v[i]>=97 && v[i]<=122)            res+=v[i];
            else if(v[i]>122)
            {
                int x=v[i]%122;
                v[i]=96+x;
                res+=v[i];
            }
            // else
            // {

            // }
        }
        for(i=0;i<diff.size();i++)
        cout<<diff[i]<<" ";

        // v.clear();
        
        // for(i=0;i<s.size();i++)
        // cout<<v[i]<<" ";
        return res;
    }
};