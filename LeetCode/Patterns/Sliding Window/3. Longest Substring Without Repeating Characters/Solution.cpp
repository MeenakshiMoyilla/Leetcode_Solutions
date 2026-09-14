class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,maxi=0;
        unordered_map<char,int> mp;
        while(left<=right && right<s.size()){
            mp[s[right]]++;
            if(mp[s[right]]==1){
                maxi=max(maxi,(int)mp.size());
                right++;
            }
            else{
                if(s[left]==s[right]){
                    mp[s[right]]--;
                    left++;
                    right++;
                }
                else{
                    mp.erase(s[left]);
                    left++;
                }
            }
        }
        return maxi;
    }
};