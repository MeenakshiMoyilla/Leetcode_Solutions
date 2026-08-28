class Solution 
{
    public:
    string reverseWords(string s) 
    {
        stringstream ss(s);
        string res, temp;
        while(getline(ss,temp,' '))
        {
            reverse(temp.begin(),temp.end());
            res.insert(res.end(),temp.begin(),temp.end());
            res.insert(res.end(),' ');
        }        
        res.pop_back();
        return res;
    }
};