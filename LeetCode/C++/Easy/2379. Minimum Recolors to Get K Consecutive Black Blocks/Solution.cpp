class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i,w=0,b=0,mini=INT_MAX;
        for(i=0;i<k;i++)
        {
            if(blocks[i]=='W')
            w++;
            else        b++;
        }
        mini=min(mini,w);
        for(i=k;i<blocks.size();i++)
        {
            if(blocks[i-k]=='W')    w--;
            else                    b++;
            if(blocks[i]=='W')      w++;
            else                    b++;
            mini=min(mini,w);
        }
        return mini;
    }
};