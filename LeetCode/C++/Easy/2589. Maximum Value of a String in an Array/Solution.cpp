class Solution {
public:
    bool isNum(char c){
        if(c>=48 && c<=59) return true;
        return false;
    }
    int maximumValue(vector<string>& strs) {
        int maxi=0,val=0;
        for(int i=0;i<strs.size();i++){
            val=0;
            for(int j=0;j<strs[i].size();j++){
                if(isNum(strs[i][j]))       val=val*10+(strs[i][j]-'0');
                else{
                    val=strs[i].size();
                    break;
                }
            }
            maxi=max(maxi,val);
        }
        return maxi;
    }
};