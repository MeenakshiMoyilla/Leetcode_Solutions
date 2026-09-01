class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int left=0,right=1;
        while(left<right && right<nums.size()){
            if(nums[left]==nums[right]){
                nums[left]=nums[left]*2;
                nums[right]=0;
            }
                left++;
                right++;
        }

        left=0,right=1;

        while(left<right && right<nums.size()){
            if(nums[left]==0 && nums[right]!=0){
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
            else if(nums[left]==0 && nums[right]==0)        right++;
            else{
                left++;
                right++;
            }
        }

        return nums;
    }
};