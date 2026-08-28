class Solution 
{
    public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int i,sum=0;
        for(i=0;i<ransomNote.size();i++)
        {
            auto it=find(magazine.begin(),magazine.end(),ransomNote[i]);
            if(it != magazine.end())
            {
                magazine.erase(it);
                sum++;
            }  
        }   
        if(sum==ransomNote.size())     return true;
        else return false;   
    }
};