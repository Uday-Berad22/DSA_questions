
vector<int> find(int a[], int n , int x )
{
    vector<int> v;
   int si=0,ei=n-1;
   int r1=-1,r2=-1;
   int mid;
   while(si<=ei)
   {
       mid=si+(ei-si)/2;
       if(a[mid]==x)
       {
           r1=mid;
           ei=mid-1;
       }
       else if(a[mid]>x)
       {
           ei=mid-1;
       }
       else
       {
           si=mid+1;
       }
   }
      si=0;ei=n-1;
   while(si<=ei)
   {
       mid=si+(ei-si)/2;
       if(a[mid]==x)
       {
           r2=mid;
           si=mid+1;
       }
       else if(a[mid]>x)
       {
           ei=mid-1;
       }
       else
       {
           si=mid+1;
       }
   }
   v.push_back(r1);
   v.push_back(r2);
   return v;
}
