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
void pre(TreeNode* p,vector<int> &v)
{
    if(p==NULL)
    return ;
    v.push_back(p->val);
    pre(p->left,v);
    pre(p->right,v);
}
    vector<int> preorderTraversal(TreeNode* root) {
vector<int> v;
pre(root,v);
return v;
    }
};
