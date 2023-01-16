//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

/*************************************Method 1:  *************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,multiset<string>> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		string s;
		cin>>s>>a;
		m[-a].insert(s);
	}
	for(auto & a:m)
	{
		for(string  s : a.second)
		{
			cout<<s<<" "<<abs(a.first)<<endl;
		}
	}
}

/*************************************Method 2:  *************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=1;
	map<int,vector<string> > m;
	for(int i=0;i<n;i++)
	{
		string s;
		int a;
		cin>>s>>a;
		m[-a].push_back(s);
		sort(m[-a].begin(),m[-a].end());
	}
	// auto it1=--m.begin();
	
	for(auto &a: m)
	{
		for(int i=0;i<a.second.size();i++)
		{
			cout<<a.second[i]<<" "<<abs(a.first)<<endl;
			// count++;
		}
		
	}
	return 0;
}
/*************************************Method 3:  *************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=1;
	map<int,vector<string> > m;
	for(int i=0;i<n;i++)
	{
		string s;
		int a;
		cin>>s>>a;
		m[a].push_back(s);
		sort(m[a].begin(),m[a].end());
	}
	// auto it1=--m.begin();
	
	for(auto it = --m.end();it!=m.begin();it--)
	{
		for(int i=0;i<(*it).second.size();i++)
		{
			cout<<(*it).second[i]<<" "<<(*it).first<<endl;
			// count++;
		}
		
	}
	auto it =m.begin();
	for(int i=0;i<(*it).second.size();i++)
		{
			cout<<(*it).second[i]<<" "<<(*it).first<<endl;
			// count++;
		}
	return 0;
}
/*************************************Method 4:  *************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,multiset<string>> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		string s;
		cin>>s>>a;
		m[a].insert(s);
	}
  auto cur_it=--m.end();
  while(true)
  {
    auto & students = (*cur_it).second;
    int marks=(*cur_it).first;
    for(auto student : students)
    {
      cout<<student<<" "<<marks<<endl;
    }
    if(cur_it==m.begin()) break;
    cur_it--;
  }
}
