class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i,res=0;
        double sum,avg;
        
        for(i=0;i<k;i++)           sum=sum+arr[i];

        avg=sum/(double)k;

        if(avg>=threshold)               res++;

        for(i=k;i<arr.size();i++){
            sum+=arr[i];
            sum-=arr[i-k];
            avg=sum/(double)k;
            if(avg>=threshold)           res++;
       } 

       return res;
    }
};