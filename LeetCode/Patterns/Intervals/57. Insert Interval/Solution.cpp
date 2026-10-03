class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        int a=newInterval[0],b=newInterval[1],i;
        intervals.push_back({a,b});
        sort(intervals.begin(),intervals.end());
        int currentstart=intervals[0][0],currentend=intervals[0][1];
        for(i=1;i<intervals.size();i++)
        {
            if(currentend>=intervals[i][0])
            {
                currentend=max(intervals[i][1],currentend);
            }
            else
            {
                v.push_back({currentstart,currentend});
                currentstart=intervals[i][0];
                currentend=intervals[i][1];
            }
        }
        v.push_back({currentstart,currentend});
        return v;
    }
};