class Solution {
public:
    int maxArea(vector<int>& a) {
        int n=a.size();
        int m=INT_MIN,j=n-1,i=0;
        while(i!=j)
        {
            m=max(m,min(a[i],a[j])*(j-i));
            if(a[i]<a[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return m;
    }
};
