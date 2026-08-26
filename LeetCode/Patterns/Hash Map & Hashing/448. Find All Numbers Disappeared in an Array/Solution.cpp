class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v;
        int i;

        for(i=0;i<nums.size();i++)     mp[nums[i]]++;

        for(i=1;i<=nums.size();i++){
            auto it=mp.find(i);
            if(!(it!=mp.end()))        v.push_back(i);
        }
        return v;
    }
};