class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int p)
    { 
        // code here
        // cout<<m[1]<<endl;
        unordered_map<int ,int> m;
        for(int i=0;i<n;i++)
        m[arr[i]]++;
        for(int i=1;i<=n;i++)
        {
            arr[i-1]=m[i];
            // cout<<m[i]<<endl;
        }
    }
};
