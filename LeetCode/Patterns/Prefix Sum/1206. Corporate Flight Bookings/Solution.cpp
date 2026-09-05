class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int a=bookings.size(),i;
        vector<int> diff(n+1);
        vector<int> prefix(n);
    
        for(i=0;i<a;i++){
            int left=bookings[i][0];
            int right=bookings[i][1];
            int value=bookings[i][2];
            diff[left-1]+=value;
            diff[right]-=value;
        }

        prefix[0]=diff[0];
        for(i=0;i<n-1;i++)
            prefix[i+1]=prefix[i]+diff[i+1];

        return prefix;
    }
};