//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        multiset<ll> s,t;
        for(int i=0;i<N;i++)
        {
        s.insert(A[i]);
        t.insert(B[i]);
        }
        if(s==t)
        return true;
        else 
        return false;
        
    }
};
