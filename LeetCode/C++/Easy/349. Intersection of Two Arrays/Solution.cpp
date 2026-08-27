class Solution 
{
    public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());

        vector<int> v1(s1.begin(),s1.end());
        vector<int> v2(s2.begin(),s2.end()); 
        vector<int> v;
        int len=v1.size(),i;
        for(i=0;i<len;i++)
        {
            int a=count(v2.begin(),v2.end(),v1[i]);
            if(a!=0)
            {
                v.push_back(v1[i]);
            }
        }
        return v;
    }
};