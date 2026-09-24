class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i,n=intervals.size(),start,end;
        vector<int> current=intervals[0];
        vector<vector<int>> ans;

        for(i=1;i<n;i++){
            start=max(current[0],intervals[i][0]);
            end=min(current[1],intervals[i][1]);
            if(start<=end)
            {
                if(current[1]<intervals[i][1])
                current[1]=intervals[i][1];
            }
            else
            {
                ans.push_back(current);
                current=intervals[i];
            }
        }
        ans.push_back(current);
        return ans;
    }
};