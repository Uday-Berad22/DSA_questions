class Solution {
public:
void pre(TreeNode *p,vector<int> &v1)
    {
        if(p==NULL)
        {
            v1.push_back(-101);
            return;
        }
        v1.push_back(p->val);
 
        pre(p->right,v1);
        pre(p->left,v1);
    }
    void pre1(TreeNode *p,vector<int> &v2)
    {
        if(p==NULL)
        {
            v2.push_back(-101);
            return;
        }
        v2.push_back(p->val);
        pre1(p->left,v2);
        pre1(p->right,v2);
    }
    bool isSymmetric(TreeNode* root) {
        vector<int> v1,v2;
        pre(root->right,v1);
        pre1(root->left,v2);
        if(v1==v2)
        return true;
        else
        return false;
    }
};
