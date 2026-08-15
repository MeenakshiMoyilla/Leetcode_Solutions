class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
    int a=nums.size(),i,sum=0;
    vector<int> v(a,-1);
    if(a<2*k+1)        return v; 
    for(i=0;i<2*k+1;i++)       sum=sum+nums[i];
    v[k]=sum/(2*k+1);
    int j=k+1;
    for(i=2*k+1;i<a;i++){
        sum=sum-nums[i-(2*k+1)]+nums[i];
        v[j]=sum/(2*k+1);
        j++;
    }
    return v;   
    }
};