class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,maxi=1;
        unordered_map<char,int> mp;
        while(left<=right && right<s.size())
        {
            mp[s[right]]++;
            if(mp[s[right]]==1)
            {
                cout<<" if"<<s[right]<<endl;
                maxi=max(maxi,(int)mp.size());
                right++;
            }
            else
            {
                if(mp[s[left]]==mp[s[right]])
                {
                    cout<<" else if "<<s[left]<<"  "<<s[right]<<endl;
                    mp[s[right]]--;
                    left++;
                    right++;
                    // break;
                }
                else
                {
                    cout<<"  else  else "<<s[left]<<endl;
                    mp.erase(s[left]);
                    left++;
                }
            }
        }
        return maxi;
    }
};