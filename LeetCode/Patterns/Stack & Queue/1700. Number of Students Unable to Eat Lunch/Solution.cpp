class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i,frnt=0,a;
        queue<int> stu;
        for(i=0;i<students.size();i++)
        {
            stu.push(students[i]);
        }
        for(i=0;i<sandwiches.size();)
        {
            if(sandwiches[i]==stu.front())
            {
                stu.pop();
                i++;
                a=0;
            }
            else
            {
                int x=stu.front();
                stu.pop();
                stu.push(x);  
                a++;
                if(a==stu.size())    break;              
            }
        }
        return stu.size();
    }
};