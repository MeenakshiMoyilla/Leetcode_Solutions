class Solution 
{
    public:
    int largestAltitude(vector<int>& gain) 
    {
        int i,sum=0;
        vector<int> v;
        v.push_back(0);
        for(i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            v.push_back(sum);
        }    
        auto a=max_element(v.begin(),v.end());
        return *a;
    }
};