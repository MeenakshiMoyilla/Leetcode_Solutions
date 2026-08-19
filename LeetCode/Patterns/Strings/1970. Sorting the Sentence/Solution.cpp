class Solution {
public:
    bool isnum(char c){
        return c>='0' && c<='9';
    }
    string sortSentence(string s) {
        map<int,string> mp;
        string s1;
        for(int i=0;i<s.size();i++){
            if(isnum(s[i])){
                mp[s[i]-'0']=s1;
                s1.clear();
            }
            else if(!(s[i]==' ')) s1.push_back(s[i]);      
        }
        s1.clear();
        for(auto x: mp){
            s1+=x.second;
            s1+=' ';
        }
        s1.pop_back();
        return s1;
    }
};