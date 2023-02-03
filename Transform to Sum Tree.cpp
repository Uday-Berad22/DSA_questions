//User function template for C++

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int post(Node *p)
    {
        if(p==NULL)return 0;
        int a=post(p->left);
        int b=post(p->right);
        int c=p->data;
        p->data=a+b;
        return p->data+c;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        post(node);
    }
};
