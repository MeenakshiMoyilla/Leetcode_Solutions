#include<algorithm>
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
         sort(nums.begin(),nums.end());
         int num=nums.size();
         for(int i=0;i<num;i++)
         {
              int freq=count(nums.begin(),nums.end(),nums[i]);
              if(freq==1)
              {
                return nums[i];
                break;
              }
         }
        //  cout<<nums;
         return 1;    
    }
};