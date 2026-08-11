class Solution 
{
    public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        auto it =max_element(candies.begin(),candies.end()); 
        vector<bool> v;
        int i;
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=*it)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }
        }    
        return v;  
    }
};