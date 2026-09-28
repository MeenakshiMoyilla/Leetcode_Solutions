class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> v;
        int i,n=nums.size();
        for(i=0;i<k;i++)
        {
            while(!dq.empty() && nums[dq.back()]<nums[i])
            dq.pop_back();
         
            dq.push_back(i);
        }

        v.push_back(nums[dq.front()]);

        for(i=k;i<n;i++){
            if(!dq.empty() && dq.front()==i-k)      
            dq.pop_front();

            while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();

            dq.push_back(i);
            
            v.push_back(nums[dq.front()]);
        }
        return v;
    }
};