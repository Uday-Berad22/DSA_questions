/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int height(TreeNode* p)
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
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
