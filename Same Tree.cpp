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
    void pre(TreeNode *p,vector<int> &v1)
    {
        if(p==NULL)
        {
            v1.push_back(0);
            return;
        }
        v1.push_back(p->val);
        pre(p->left,v1);
        pre(p->right,v1);
    }
    void pre1(TreeNode *p,vector<int> &v2)
    {
        if(p==NULL)
        {
            v2.push_back(0);
            return;
        }
        v2.push_back(p->val);
        pre(p->left,v2);
        pre(p->right,v2);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       vector<int> v1,v2;
       pre(p,v1);
       pre1(q,v2);
       if(v1==v2)
       return true;
       else
        return false;

    }
};
