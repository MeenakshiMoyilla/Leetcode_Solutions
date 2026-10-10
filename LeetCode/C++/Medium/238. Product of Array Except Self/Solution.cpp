class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,n=nums.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0]=nums[i];

        for(i=1;i<n;i++)
        {
            left[i]=left[i-1]*nums[i];
        }
        right[n-1]=nums[n-1];
        for(i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)    nums[i]=right[i+1];
            else if(i==n-1)  nums[i]=left[i-1];
            else    nums[i]=left[i-1]*right[i+1];
        }
        return nums;
    }
};