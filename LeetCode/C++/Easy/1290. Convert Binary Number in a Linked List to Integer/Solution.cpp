/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       ListNode * temp=head;
       vector<int> v;
       int i;
       while(temp!=NULL)
       {
            v.push_back(temp->val);
            temp=temp->next;
       } 
       unsigned long long res=0;
       for(i=0;i<v.size();i++)
       {
            int a=v.size()-1-i;
            int b=pow(2,a);
            res=res+v[i]*b;
       }
       return res;
    }
};



















