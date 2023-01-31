class Solution {
public:
    int mySqrt(int x) 
{
  double  low =0;
  double high=INT_MAX;
  double mid;
  while(high-low>=0.0000000001)
  {
    mid=(low+high)/2;
    if(mid*mid>x)
    {
      high=mid;
    }
    else
    {
      low =mid;
    }
  }
  return (low);
    }
};
