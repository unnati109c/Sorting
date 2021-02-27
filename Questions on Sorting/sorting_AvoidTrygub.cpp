https://codeforces.com/contest/1450/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		sort(s.begin(),s.end());
		cout<<s<<endl;
	}
	return 0;
}
	
