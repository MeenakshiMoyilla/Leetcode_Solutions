class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int i,n=tickets.size(),count=0;
        for(i=0;i<n;i++)         q.push(i);
        
        while(1)
        {
            int i=q.front();
            if(i==k && tickets[i]==1)
            {
                count++;
                return count;
            }
            if(tickets[i]!=0)
            {
                tickets[i]--;
                count++;
                q.pop();
                if(tickets[i]!=0)
                q.push(i);
            }
        }
        return 0;
    }
};