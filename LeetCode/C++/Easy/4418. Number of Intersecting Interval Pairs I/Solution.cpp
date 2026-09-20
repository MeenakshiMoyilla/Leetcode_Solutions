class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int i,j,res=0,a=0;
        for(i=0;i<intervals.size();i++)
        {
            for(j=i+1;j<intervals.size();j++)
            {
                if(intervals[i][0]<intervals[j][0] && intervals[i][1]<intervals[j][0])
                {
                    a++;
                }
                else if(intervals[j][0]<intervals[i][0] && intervals[j][1]<intervals[i][0])
                {
                    a++;
                }
                else
                res++;
            }
        }
        return res;
    }
};