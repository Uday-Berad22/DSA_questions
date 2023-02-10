//https://www.eolymp.com/en/contests/12786/problems/121479
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> v,int mid,int m)
{
if(mid==0)
return true;
    int sum=0;
    for(auto x : v)
    {
        sum=sum+x/mid;
    }
    return sum>=m;
}
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int low =-1;
    int high=2000000008;
    while(high-low>1)
    {
        int mid=(high+low)/2;
        if(check(v,mid,m))
        {
            low = mid;
        }
        else
        {
            high=mid;
        }
    }
    cout<<low<<endl;
    return 0;
}
