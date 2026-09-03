class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;
        for(i=m;i<m+n;i++)    nums1[i]=nums2[i-m]; 
        
        int left=0,right=m;
        while(left<right && left<m && right<m+n)
        {
            if(nums1[right]<nums1[left])
            {
                swap(nums1[right],nums1[left]);
                left++;
                right++;
            }
            else        left++;
        }
        
    }
};