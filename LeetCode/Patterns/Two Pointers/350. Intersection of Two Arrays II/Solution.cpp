class Solution 
{
    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        int i,j,k;
        vector<int> v;
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    v.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+j);
                    break;
                }
                // for(k=0;k<nums2.size();k++)
                // {
                //     cout<<nums2[k]<<"  ";
                // }
                // cout<<endl;
            }
        }    
        return v;
    }
};