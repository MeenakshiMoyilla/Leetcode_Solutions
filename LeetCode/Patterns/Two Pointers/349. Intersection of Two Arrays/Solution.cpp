class Solution 
{
    public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int i;
        vector<int> v;
        unordered_map<int,int> mp;
        unordered_map<int,int> mp1;
        for(i=0;i<nums1.size();i++)    mp[nums1[i]]++;
        for(i=0;i<nums2.size();i++)    mp1[nums2[i]]++;
        for(auto x:mp)     {
            if(mp1.find(x.first)!=mp1.end())
            v.push_back(x.first);
        }
        return v;

    }
};