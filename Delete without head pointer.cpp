/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       Node *p=del,*q=head;
       if(p==head)
       {
           head=head->next;
       }
       else
       {
       while(q->next!=p)
       {
           q=q->next;
       }
       q->next=p->next;
       }
       delete p;
    }

};
