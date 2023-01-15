/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node * p)
    {
        if(p!=NULL)
        {
            int x,y;
            x=height(p->left);
            y=height(p->right);
            return x>y?x+1:y+1;
        }
        return 0;
    }
    int ans(Node *p)
    {
        return height(p->left)+height(p->right)+1;
    }
    int diameter(Node* root) {
        // Your code here
        Node *p=root;
        int m=ans(p);
        queue<Node *> q;
        q.push(p);
        while(!q.empty())
        {
            p=q.front();
            q.pop();
            if(p->left)
            {
                if(ans(p->left)>m)
                {
                    m=ans(p->left);
                }
            }
            if(p->right)
            {
                if(ans(p->right)>m)
                {
                    m=ans(p->right);
                }
            }
        }
        return m;
    }
};
