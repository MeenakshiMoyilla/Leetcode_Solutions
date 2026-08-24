class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,pro=1,zero=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)         zero++;
            else                   pro=pro*nums[i];
        }
        for(i=0;i<nums.size();i++){
            if(zero>1)                nums.assign(nums.size(),0);
            else if(zero==0)          nums[i]=pro/nums[i];
            else{
                if(nums[i]==0)  nums[i]=pro;
                else            nums[i]=0;
            }
        }
        return nums;
    }
};