class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i,n=intervals.size();
        vector<int> current=intervals[0];
        vector<vector<int>> ans;
        // return current;
        // cout<<current[0]<<endl;
        // cout<<current[1];
        for(i=1;i<n;i++)
        {
            if(current[1]>=intervals[i][0])
            {
                current[1]=intervals[i][1];
            }
            else
            {
                ans.push_back(current);
                current[0]=intervals[i][0];
                current[1]=intervals[i][1];
            }

        }
        ans.push_back(current);
        return ans;
    }
};