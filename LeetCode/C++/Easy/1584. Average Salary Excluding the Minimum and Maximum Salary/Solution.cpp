class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double a=salary.size()-2,sum=0;
        int i;
        for(i=1;i<salary.size()-1;i++)
        {
            sum=sum+salary[i];
        }
        return sum/a;
    }
};