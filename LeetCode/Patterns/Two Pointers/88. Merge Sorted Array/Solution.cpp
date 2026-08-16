class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        if(n==0)
        {
            sort(nums1.begin(),nums1.end());
        }        
        else
        {
            int i,j,count=0;
            int a=nums1.size();
            // cout<<nums1.size()<<endl;
            for(i=0;i<a;i++)
            {
                // cout<<i<<"  ";
                // cout<<endl<<nums1[i]<<endl;
                if(nums1[i]==0)
                {
                    nums1.erase(nums1.begin()+i);
                    count++;
                    if(count==n)    break;
                }
                // for(j=0;j<nums1.size();j++)
                // {
                //     cout<<nums1[j]<<"  ";
                // }
            }
            // cout<<endl;
            for(i=0;i<nums2.size();i++)
            {
                nums1.push_back(nums2[i]);
            }
            sort(nums1.begin(),nums1.end());
        }
    }
};