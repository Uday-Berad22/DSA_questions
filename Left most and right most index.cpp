//https://practice.geeksforgeeks.org/problems/find-first-and-last-occurrence-of-x0849/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution
{
    public:
    long long first_o(vector<long long > v,long long &r,long long  x,long long si,long long ei)
    {
        if(si<=ei)
        {
           long long  mid=si+(ei-si)/2;
        //    cout<<"*****"<<endl;
            if(v[mid]==x)
            {
                r=mid;
                // cout<<mid<<endl;
                first_o(v,r,x,si,mid-1);
            }
            else if(v[mid]>x)
            {
            first_o(v,r,x,si,mid-1);
            }
            else
            {
                first_o(v,r,x,mid+1,ei);
            }
        }
        return r;
    }
        long long  last_o(vector<long long> v,long long &r,long long  x,long long si,long long ei)
    {
        if(si<=ei)
        {
           long long  mid=si+(ei-si)/2;
        //    cout<<"*****"<<endl;
            if(v[mid]==x)
            {
                r=mid;
                // cout<<mid<<endl;
                last_o(v,r,x,mid+1,ei);
            }
            else if(v[mid]>x)
            {
            last_o(v,r,x,si,mid-1);
            }
            else
            {
                last_o(v,r,x,mid+1,ei);
            }
        }
        return r;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        //  vector<int> v1;
        long long r=-1;
        long long a=first_o(v,r,x,0,v.size()-1);
        long long b=last_o(v,r,x,0,v.size()-1);
        pair <long long,long long> p={a,b};
       return p ;
       
    }
};
