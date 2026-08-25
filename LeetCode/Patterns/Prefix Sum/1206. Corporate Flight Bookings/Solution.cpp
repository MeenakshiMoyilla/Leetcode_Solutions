class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n,0);
        int i,j;
        for(i=0;i<bookings.size();i++)
        {
            for(j=bookings[i][0];j<=bookings[i][1];j++)
            {
                v[j-1]+=bookings[i][2];
            }
        }
        return v;
    }
};