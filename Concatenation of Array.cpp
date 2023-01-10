// https://leetcode.com/problems/concatenation-of-array/description/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        vector<int > a;
        for(int i=0;i<v.size();i++)
        {
            a.push_back(v[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            a.push_back(v[i]);
        }
        return a;
    }
};
