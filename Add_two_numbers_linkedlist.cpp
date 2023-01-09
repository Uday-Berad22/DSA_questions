//https://leetcode.com/problems/add-two-numbers/submissions/874756216/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       vector <int> a,b;
       int sum=0,c=0;
       while(l1!=NULL)
       {
           a.push_back(l1->val);
           l1=l1->next;
       } 
       while(l2!=NULL)
       {
           b.push_back(l2->val);
           l2=l2->next;
       } 
       int i=0,j=0;
        queue<int> s ;
       while(i<a.size()||j<b.size())
       {
           int x=0,y=0;
           if(i<a.size())
           {
               x=a[i];
               i++;
           }
           if(j<b.size())
           {
               y=b[j];
               j++;
           }
            sum=x+y+c;
            c=sum/10;
           s.push(sum%10);
       }
       if(c>0)
       s.push(c);
       ListNode *l3=NULL,*p=NULL,*q=NULL;
       l3=new ListNode ;
       l3->val=s.front();
       s.pop();
       l3->next=NULL;
       p=l3;
       while(!s.empty())
       {
           q=new ListNode ;
           q->val=s.front();
           s.pop();
           q->next=NULL;
           p->next=q;
           p=q;
       }

       return l3;
    }
};
