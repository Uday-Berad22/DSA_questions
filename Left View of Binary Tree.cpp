

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
    vector <int> v;
    Node * p=root;
    if(p!=NULL)
 
    {
    queue<Node *> q;
    q.push(p);
    v.push_back(p->data);
    while(!q.empty())
    {
        int count=0;
       int  n=q.size();
        for(int i=0;i<n;i++)
        {
            p=q.front();
            q.pop();
            if(p->left)
            {
                 if(count==0)
                {
                v.push_back(p->left->data);   
                count++;
                }
                q.push(p->left);
                
            }
            if(p->right )
            {
                if(count==0)
                {
                v.push_back(p->right->data);
                
                count++;}
                q.push(p->right);
            }
            
        }
    }
    }
    return v;
}
