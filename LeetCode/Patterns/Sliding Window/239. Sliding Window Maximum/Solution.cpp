class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> v;
        int i,n=nums.size();
        for(i=0;i<k;i++)
        {
            // if(dq.front()==)
            // if(!dq.empty())
            // {
                while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
                // if(!dq.empty() && nums[dq.back()]>nums[i])
                dq.push_back(i);
            // }
            // if(dq.empty())
            // {
            //     dq.push_back(i);
            // }
            // v.push_back(nums[dq.front()]);
        }
        v.push_back(nums[dq.front()]);
        for(i=k;i<n;i++)
        {
            // cout<<i-k<<"   ";
            if(!dq.empty() && dq.front()==i-k)      dq.pop_front();
            // if(!dq.empty())
            // {
                while(!dq.empty() && nums[dq.back()]<nums[i])
                dq.pop_back();
                // if(!dq.empty() && nums[dq.back()]>nums[i])
                dq.push_back(i);
            // }
            // else
            // {
                // dq.push_back(i);
            // }
            v.push_back(nums[dq.front()]);
        }
        return v;
    }
};