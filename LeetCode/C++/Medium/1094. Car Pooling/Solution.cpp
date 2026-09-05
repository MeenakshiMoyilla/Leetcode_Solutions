class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        int i,maxi=0;

        for(i=1;i<trips.size();i++)
        {
            maxi=max(trips[i][2],maxi);
        }
        vector<int> diff(maxi);
        vector<int> prefix(maxi);
        for(i=0;i<trips.size();i++)
        {
            int passengers=trips[i][0];
            int from=trips[i][1];
            int to=trips[i][2];
            diff[from-1]+=passengers;
            diff[to-1]-=passengers;
        }
        prefix[0]=diff[0];
        if(prefix[0]>capacity)  return false;
        for(i=0;i<maxi-1;i++)
        {
            prefix[i+1]=prefix[i]+diff[i+1];
            if(prefix[i+1]>capacity)    return false;
        }
        return true;
    }
};