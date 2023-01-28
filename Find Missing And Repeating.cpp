class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int> m;
        sort(arr,arr+n);
        int *a=new int[2];
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0)
            {
                a[1]=i;
            }
            if(m[i]>1)
            {
                a[0]=i;
            }
        }
        return a;
    }
};
