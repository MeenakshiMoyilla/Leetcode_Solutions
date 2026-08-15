class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
     int a=nums.size(),i,sum=0;
     vector<int> v(a,-1);
     if(a<2*k+1)
    {
        // cout<<"hgdf";
        fill(nums.begin(),nums.end(),-1);
        // nums.resize(a,-1);
        return nums; 
    }
    for(i=0;i<2*k+1;i++)
    {
        sum=sum+nums[i];
        // if(i<k) nums[i]=-1;
    }
    v[k]=sum/(2*k+1);
    // cout<<sum;
    int j=k+1;
    for(i=2*k+1;i<a;i++)
    {
        // cout<<nums[i]<<"  "<<nums[i-(2*k+1)];
        // cout<<sum<<"  ";
        sum=sum-nums[i-(2*k+1)]+nums[i];
        v[j]=sum/(2*k+1);
        
        cout<<j<<"  "<<i;
        j++;
    }
    // cout<<sum;
     return v;   
    }
};