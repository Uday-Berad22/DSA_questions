

int transitionPoint(int arr[], int n) {
    // code here
    int p=-1;
   
     p= (lower_bound(arr,arr+n,1)-arr);
    if(arr[p]==1)
    return p;
    else
     return -1;
}
