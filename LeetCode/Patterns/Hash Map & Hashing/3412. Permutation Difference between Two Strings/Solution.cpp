class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int i,j,sum=0;
        for(i=0;i<s.size();i++){
            for(j=0;j<t.size();j++){
                if(s[i]==t[j]){  
                    sum=sum+abs(i-j);
                    break;
                }
            }
        }
        return sum;
    }
};