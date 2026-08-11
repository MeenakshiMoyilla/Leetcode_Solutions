class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z=0,left=0,right=0,maxi=INT_MIN,a=-1;
        while(right<nums.size() && z<=k)
        {
            if(nums[right]==1)
            {
                a=right-left+1; 
                maxi=max(maxi,a);
                // cout<<right<<"   ";
            }
            else                z++;
            right++;
            if(z>k)
            {
                while(z>k)
                {
                    if(nums[left]==0)
                    {
                        z--;
                        // left++;
                    }
                     left++;

                }
            }
        }
        return maxi;
    }
};