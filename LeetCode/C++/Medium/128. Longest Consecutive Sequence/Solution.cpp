class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        if(nums.size()==0)  return 0;
        set<int> ord(nums.begin(),nums.end());
        int count=1,maxi=1;
        for(auto it=ord.begin();next(it)!=ord.end();it++) {
            if((*it)+1==*next(it))  {
                count++;
                maxi=max(maxi,count);
            }
            else    count=1;
        }
        return max(maxi,count);
    }
};