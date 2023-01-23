class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> pos,neg,v;
        int n=arr.size();
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            neg.push_back(arr[i]);
	        }
	        else
	        {
	            pos.push_back(arr[i]);
	        }
	    }
	    int i=0,j=0,k=0,a=pos.size(),b=neg.size();
	    while(i<a&&j<b)
	    {
	        if(k%2==0)
	        v.push_back(pos[i++]);
	        else
	        v.push_back(neg[j++]);
            k++;
	    }
	    while(i<a)
	    {
	        v.push_back(pos[i++]);
	    }
	    while(j<b)
	    {
	        v.push_back(neg[j++]);
	    }
        return v;
    }
};
