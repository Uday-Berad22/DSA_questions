// https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/876127810/
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
    TreeNode* pre(TreeNode* p, int val)
    {
        if(p==NULL)
        return NULL;
        if(p->val==val)
        {
            return p;
        }
        TreeNode* r= pre(p->left,val);
        if(r!=NULL)
        {
            return r;
        }
       TreeNode* q= pre(p->right,val);
        if(q!=NULL)
        {
            return q; ;
        }
      return 0;
        }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        return pre( root,  val);
    }
};
