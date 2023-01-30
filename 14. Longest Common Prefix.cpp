class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char temp;
        string ans;
        for(int i=0;i<strs[0].size();i++)
        {
            temp=strs[0][i];
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=temp)
                {
                    goto l;
                }
            }
            ans.push_back(temp);
        }
        l:
        return ans;
    }
};
