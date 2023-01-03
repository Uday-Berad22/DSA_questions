// Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& v) {
        unordered_map <int,int> m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        for(auto a: m)
        {
            if(a.second%2!=0)
            {
                return false;
            }
        }
        return true;
    }
};
