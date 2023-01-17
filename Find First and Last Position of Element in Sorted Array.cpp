//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
class Solution {
public:
    int first_o(vector<int> v,int &r,int x,int si,int ei)
    {
        if(si<=ei)
        {
           int  mid=si+(ei-si)/2;
        //    cout<<"*****"<<endl;
            if(v[mid]==x)
            {
                r=mid;
                cout<<mid<<endl;
                first_o(v,r,x,si,mid-1);
            }
            else if(v[mid]>x)
            {
            first_o(v,r,x,si,mid-1);
            }
            else
            {
                first_o(v,r,x,mid+1,ei);
            }
        }
        return r;
    }
        int last_o(vector<int> v,int &r,int x,int si,int ei)
    {
        if(si<=ei)
        {
           int  mid=si+(ei-si)/2;
        //    cout<<"*****"<<endl;
            if(v[mid]==x)
            {
                r=mid;
                cout<<mid<<endl;
                last_o(v,r,x,mid+1,ei);
            }
            else if(v[mid]>x)
            {
            last_o(v,r,x,si,mid-1);
            }
            else
            {
                last_o(v,r,x,mid+1,ei);
            }
        }
        return r;
    }
    vector<int> searchRange(vector<int>& v, int x) {
       vector<int> v1;
        int r=-1;
        v1.push_back(first_o(v,r,x,0,v.size()-1));
       v1.push_back(last_o(v,r,x,0,v.size()-1));
        return v1;
    }
};
