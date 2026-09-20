class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int i,n=nums.size();
        unordered_map<int,int>  mp;
        for(i=0;i<n;i++)        mp[nums[i]]++;

        for(i=10000;i>=-10000;i--){
            if(mp.find(i)!=mp.end() && k>0){
                k=k-mp[i];
                if(k<=0)    return i;
            }
        }
        return 0;
    }
};