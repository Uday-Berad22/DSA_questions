//User function Template for C++
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
public:
    void  preorder(Node *p,int t,vector<Node *> &v)
    {
       
        if(p==NULL)
        return ;
         if(p->data==t)
        {
            v.push_back(p);
            // return p;
        }
        preorder(p->left,t,v);
        preorder(p->right,t,v);
        // return r!=NULL?r:q;
    }
    long long int verticallyDownBST(Node *root,int t){
        // Code here
        
        Node *p ;
        vector<Node *> v;
        preorder(root,t,v);
        if(v.size()==0)return -1;
        p=v[0];
        // if(p)
        {
        Node *qa=p;
        // return p->data;
        queue<pair<Node *,int>> q;
        q.push({p,0});
        multimap<int ,int> m;
        if(!p->left&&!p->right)
        return 0;
        while(!q.empty())
        {
            pair<Node*,int> pa;
            pa=q.front();
            q.pop();
            p=pa.first;
            int count=pa.second;
            m.insert({count,p->data});
            if(p->left)
            {
                q.push({p->left,count-1});
            }
             if(p->right)
            {
                q.push({p->right,count+1});
            }
        }
       long long  int sum=0;
        for(auto a: m)
        {
            if(a.first==0)
            {
                sum+=a.second;
            }
        }
        return sum-(qa->data);
    }
    // else return 0;
    }
};
