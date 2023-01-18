class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& v1, vector<int>& v2) {
        vector<int> v;
        stack<int> st;
        unordered_map<int,int> m;
        // for(int i=0;i<v1.size();i++)
        // {
        //     v.push_back(-1);
        // }
        for(int i=0;i<v2.size();i++)
        {
            if(st.empty()||v2[i]<=st.top())
            {
                st.push(v2[i]);
            }
            else
            {
                while(!st.empty())
                {
                    if(v2[i]>st.top())
                    {
                    m[st.top()]=v2[i];
                    st.pop();
                    }
                    else
                    break;
                }
                st.push(v2[i]);
            }
        }
        while(!st.empty())
        {
            m[st.top()]=-1;
            st.pop();
        }
        for(int i=0;i<v1.size();i++)
        {
            v.push_back(m[v1[i]]);
        }
        return v;
    }
};
