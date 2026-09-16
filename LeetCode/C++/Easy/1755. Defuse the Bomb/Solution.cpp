class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int i,n=code.size();
        vector<int> ans(n,0);
    
        if(k>0){
            int sum=0;
            for(i=0;i<k;i++)        sum=sum+code[i];
        
            ans[n-1]=sum;

            for(i=1;i<n;i++){
                int idx=(i+k-1)%n;
                sum=sum-code[i-1];
                sum=sum+code[idx];
                ans[i-1]=sum;
            }
        }
        
        else if(k<0)
        {
            int sum=0;

            for(i=n-1;i>=n+k;i--)        sum=sum+code[i];
    
            ans[0]=sum;

            for(i=n-2;i>=0;i--){
                int idx=(i+k+n+1)%n;
                sum=sum-code[i+1];
                sum=sum+code[idx];
                ans[i+1]=sum;
            }
        }
        return ans;
    }
};