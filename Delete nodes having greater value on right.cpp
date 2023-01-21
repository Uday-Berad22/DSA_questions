/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node * p=head,*q=p->next,*r=NULL;
        while(q!=NULL&&p!=NULL)
        {
            if(p->data<q->data)
            {
                if(p==head)
                {
                    head=q;
                }
                if(r!=NULL)
                {
                    r->next=p->next;
                }
                delete p;
                p=head;
                q=p->next;
            }
            else
            {
                r=p;
                p=p->next;
                q=q->next;
            }
        }
        return head;
    }
    
};
   
