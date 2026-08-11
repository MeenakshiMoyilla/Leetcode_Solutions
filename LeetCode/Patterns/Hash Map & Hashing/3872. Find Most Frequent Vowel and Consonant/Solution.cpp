class Solution{
    bool isVowel(char x)
    {
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
        return true;
        return false;
            }
    public:
    int maxFreqSum(string s){
        unordered_map<char,int> m;
        int i,maxi=0,maxis=0;
        for(i=0;i<s.size();i++)
        {
            // auto it=find()
            if(m.contains(s[i]))    m[s[i]]++;
            else    m[s[i]]=1;
            if(isVowel(s[i]))  maxi=max(maxi,m[s[i]]);
            else               maxis=max(maxis,m[s[i]]); 
        }
        return maxi+maxis;
        // unordered_map<char,int> conso;


    }
};