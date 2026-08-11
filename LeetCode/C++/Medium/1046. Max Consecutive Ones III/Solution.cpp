class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int z=0,left=0,right=0,maxi=0,a=0;
        while(right<nums.size() && z<=k){
            if(nums[right]==1){
                a=right-left+1; 
                maxi=max(maxi,a);
            }
            else                z++;
            right++;
            if(z>k){
                while(z>k){
                    if(nums[left]==0)           z--;
                    left++;
                }
            }
        }
        return maxi;
    }
};