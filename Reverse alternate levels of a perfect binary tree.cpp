

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

void reverseAlternate(Node *root)
{
    //Your code here
    Node *p=root;
    queue<Node*> q;
    stack<int> st;
    int n=0;
    q.push(root);
    while(!q.empty())
    {
        // int count=0;
       int  n1=q.size();
        for(int i=0;i<n1;i++)
        {
        p=q.front();
        if(n%2!=0)
        {
            p->data=st.top();
            // cout<<st.top()<<endl;
            st.pop();
        }
        q.pop();
        if(p->left)
        {
            if(n%2==0)
            st.push(p->left->data);
            q.push(p->left);
        }
        if(p->right)
        {
            if(n%2==0)
            st.push(p->right->data);
            q.push(p->right);
        }
        }
        n++;
    }
}
