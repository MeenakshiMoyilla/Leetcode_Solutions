class Solution 
{
    public:
    int mostWordsFound(vector<string>& sentences) 
    {
        stringstream s;
        int max=-999999,i;
        for(i=0;i<sentences.size();i++)
        {

            string temp;
            int cou=0;
            stringstream ss(sentences[i]);
            while(getline(ss,temp,' '))
            {
                cou++;
            }
            if(max<cou)
            max=cou;
        }
        return max;
    }
};