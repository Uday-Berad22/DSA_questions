/* A binary tree node structure

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

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *p)
    {
        if(p==NULL)
        {
            return 0;
        }
        else
        {
            int x,y;
            x=height(p->left);
            y=height(p->right);
            return x>y?x+1:y+1;
        }
        
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        queue<Node*> q;
        Node *p=root;
        q.push(root);
        while(!q.empty())
        {
            int x=0,y=0;
            p=q.front();
            q.pop();
            if(p->left)
            {
                q.push(p->left);
                x=height(p->left);
            }
            if(p->right)
            {
                q.push(p->right);
                y=height(p->right);
            }
            if(abs(x-y)>1)return false;
        }
        return true;
    }
};
