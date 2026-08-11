class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> mp;
        vector<vector<int>> v(2);
        for(int i=0;i<matches.size();i++){
            int winner=matches[i][0];
            int loser=matches[i][1];
            if(!mp.contains(winner))
            mp[winner]=0;
            mp[loser]++;
        }
        for(auto &x: mp)
        {
            // cout<<x.first<<"  "<<x.second<<"  ";
            if(x.second==0)              v[0].push_back(x.first);
            if(x.second==1)              v[1].push_back(x.first);
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        return v;
    }
};