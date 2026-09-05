class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> v(s.size());
        vector<int> diff(s.size()+1,0);
        vector<int> prefix(s.size());
        string res;
        int i=0;
        
        for(i=0;i<s.size();i++)
            v[i]=s[i];
        
        for(i=0;i<shifts.size();i++){
            int left=shifts[i][0];
            int right=shifts[i][1];
            int direc=shifts[i][2];
            if(direc==1){
                diff[left]+=1;
                diff[right+1]-=1;
                
            }
            else{
                diff[left]-=1;
                diff[right+1]+=1;
            }
        }
        prefix[0]=diff[0];
        v[0]=v[0]+prefix[0];

        for(i=1;i<s.size();i++){
            prefix[i]=prefix[i-1]+diff[i];
            v[i]=v[i]+prefix[i];
        }

        for(i=0;i<s.size();i++){
            if(v[i]>122)
                v[i]='a'+(v[i]-'a')%26;
            else if(v[i]<97)
                v[i]='z'-('a'-v[i]-1)%26;

            res+=v[i];
        }

        return res;
    }
};