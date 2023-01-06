//Number of occurrence
//User function template for C++
// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int a[], int n, int x) {
	    // code here
	    int l=0,r=n-1;
	    int m,j=-1,k=-1;
	    while(l<=r)
	    {
	        m=l+(r-l)/2;
	        if(a[m]==x)
	        {
	            j=m;
	            r=m-1;
	        }
	        else if(a[m]<x)
	        {
	            l=m+1;
	        }
	        else
	        {
	            r=m-1;
	        }
	    }
	    l=0;r=n-1;
	    while(l<=r)
	    {
	        m=l+(r-l)/2;
	        if(a[m]==x)
	        {
	            k=m;
	            l=m+1;
	        }
	        else if(a[m]<x)
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
	    }
	    if(j==-1&&k==-1)
	    {
	        return 0;
	    }
	    return k-j+1;
	}
};
