class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
       vector<int> v1;
       int n=v.size();
    //    mid=n/2;
    
        int x=v[0];
        // v1.push_back(1);
        int i=0,j=n-1;
        while(i<j)
        {
            if(v[i]+v[j]<t)
            {
                i++;
            }
            else if(v[i]+v[j]>t)
            {
                j--;
            }
            else
            {
                break;
            }
        }
        v1.push_back(i+1);
        v1.push_back(j+1);
       return v1;
    }
};
