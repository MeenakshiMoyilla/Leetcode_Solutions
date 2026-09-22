class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min=INT_MAX,cnt=0,sum=0,k,i,n=nums.size();
        for(k=l;k<=r;k++)
        {
            sum=0;
            for(i=0;i<k;i++)
            {
                sum=sum+nums[i];
            }
            if(sum>0 && sum<min){
                cnt++;
                min=sum;
            }
            for(i=k;i<n;i++)
            {
                sum=sum+nums[i];
                sum=sum-nums[i-k];
                if(sum>0 && sum<min)
                {
                    cnt++;
                    min=sum;
                }
                // cout<<min<<" ";
            }

        }
        if(cnt!=0)        return min;
        return -1;
    }
};