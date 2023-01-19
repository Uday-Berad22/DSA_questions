//https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node *flatten(Node *root)
{
   if(root!=NULL){
   Node * p=root,*q=NULL;
   multiset <int> s;
   while(p!=NULL) {
       q=p;
       while(q!=NULL) {
           s.insert(q->data);
           q=q->bottom;
       }
       p=p->next;
   }
   auto it=s.begin();
   q=NULL;
   p=NULL;
   while(it!=s.end()){
       if(p==NULL) {
       q=new Node(0);
       q->data=(*it);
       p=q;
       root=p;
       p->bottom=NULL;
       }
       else{
           q=new Node(0);
           q->data=(*it);
           q->bottom=NULL;
           p->bottom=q;
           p=q;
       }
       it++;
   }
   }
   return root;
}
