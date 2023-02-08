class Solution {
public:
    string addBinary(string a, string b) {
        stack<int> s1,s2,s3;
        if(a==b&&a=="0")
        {
            return "0";
        }
        if(a=="1"&&b=="0"||a=="0"&&b=="1")
        {
            return "1";
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='1')
            s1.push(1);
            else
            s1.push(0);
        }
        for(int i=0;i<b.size();i++)
        {
            if(b[i]=='1')
            s2.push(1);
            else
            s2.push(0);
        }
         int sum,carry=0;
        while(!s1.empty()||!s2.empty())
        {
         int x=0,y=0;
          if(!s1.empty())
          {
              x=s1.top();
              s1.pop();
          }
          if(!s2.empty())
          {
              y=s2.top();
              s2.pop();
          }
          sum=x+y+carry;
          carry=sum/2;
          s3.push(sum%2);
        }
        if(carry==1)
        s3.push(carry);
        string s;
        while(!s3.empty())
        {
            if(s3.top()==1)
            s.push_back('1');
            else
            s.push_back('0');
            s3.pop();
        }
        return s;
    
    }
};
