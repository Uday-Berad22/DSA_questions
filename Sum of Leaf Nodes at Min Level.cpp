//User function Template for C++
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    
    int minLeafSum(Node *root)
    {
      Node *p=root;
        int sum=0;
      if(p)
      {
          queue<Node *> q;
          q.push(p);
        
        //   v.push_back(p->data);
          int flag=0;
          while(!q.empty())
          {
              int n=q.size();
              for(int i=0;i<n;i++)
              {
              p=q.front();
              q.pop();
              if(p->left)
              {
                  q.push(p->left);
                //   v.push_back(p->left->data);
              }
              if(p->right)
              {
                  q.push(p->right);
                //   v.push_back(p->right->data);
              }
              if(p->left==NULL&&p->right==NULL)
              {
                  sum=p->data+sum;
                  flag=1;
              }
              }
              if(flag==1)
              {
                  break;
              }
          }
      }
      return sum;
    }
};
