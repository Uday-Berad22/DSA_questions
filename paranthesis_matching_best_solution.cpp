//https://www.hackerrank.com/challenges/balanced-brackets/problem
#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> m ={{'{',-1},{'[',-2},{'(',-3},{')',3},{']',2},{'}',1}};
string isBalanced(string s) {
    stack <char> st; 
    for(char c : s)
    {
        if(m[c]<0)st.push(c);
        else{
            if(st.empty())return "NO";
            char top=st.top();
            st.pop();
            if(m[top]+m[c]!=0)return "NO";
        }
    }
    if(st.empty())return "YES";
    return "NO";
}
