class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int n=INT_MAX,m=INT_MIN;
        while(abs(x)>0)
        {
            if((rev>INT_MAX/10) || (rev<INT_MIN/10))
            return 0;
            rev=rev*10+x%10;
            x=x/10;
        }
        return rev;
    }
};
