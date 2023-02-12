//https://practice.geeksforgeeks.org/problems/6cb0782855c0f11445b8d70e220f888e6ea8e22a/1
#define data val
class Solution{
public:
    bool is_prime(int n)
    {
        int count=0;
        for(int i=2;i*i<=n;i++)
        {
        if(n%i==0)
        {
            return false;
        }
         }
    return true;
    }
    Node *primeList(Node *head){
        Node *p=head;
        
        while(p!=NULL)
        {
            if(p->data==1)
            {
                p->data=2;
            }
            else
            {
            if(!is_prime(p->data))
            {
                int ans=p->data;
                int i=p->data;
                int j=p->data;
                while(i>=1&&j<=100000)
                {
                    if(is_prime(i))
                    {
                        ans=i;
                        break;
                    }
                    if(is_prime(j))
                    {
                        ans=j;
                        break;
                    }
                    i--;
                    j++;
                }
                p->data=ans;
            }
            }
            p=p->next;
        }
        return head;
    }
};
