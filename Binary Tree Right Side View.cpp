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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root!=NULL)
        {
        queue<TreeNode*> q;
        TreeNode* p=root;
        v.push_back(p->val);
        q.push(p);
        while(!q.empty())
        {
            int n=q.size();
            int count=0;
            for(int i=0;i<n;i++)
            {
                p=q.front();
                q.pop();
                if(p->right)
                {
                    if(count==0)
                    {
                        v.push_back(p->right->val);
                        count++;
                    }
                    q.push(p->right);
                }
                if(p->left)
                {
                    if(count==0)
                    {
                        v.push_back(p->left->val);
                        count++;
                    }
                    q.push(p->left);
                }
            }
        }

       }
       return v;
    }
};
