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
    int count(ListNode *p)
    {
        int co=0;
        while(p!=NULL)
        {
            co++;
            p=p->next;
        }
        return co;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
              int a=count(head);
        ListNode  *p=head;
        vector<vector<int> > v;
        for(int i=0;p!=NULL;i++)
        {
            vector<int> v1;
            for(int j=0;j<k&&p!=NULL;j++)
            {
                v1.push_back(p->val);
                p=p->next;
            }
            v.push_back(v1);
        }
        p=head;
        for(int i=0;i<v.size();i++)
        {
            for(int j=v[i].size()-1;j>=0&&v[i].size()==k;j--)
            {
                p->val=v[i][j];
                p=p->next;
            }
        }
        return head;
    }
};
