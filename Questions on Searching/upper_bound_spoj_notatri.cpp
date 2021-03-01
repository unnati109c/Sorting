// https://www.spoj.com/problems/NOTATRI/

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long int

int main()
{
	while(true)
	{
		ll n;
		cin>>n;
		if(n==0) return 0;

		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}

		sort(a,a+n);
		ll ans =0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=i+1;j<n-1;j++)
			{
				ans+= n - (upper_bound(a,a+n,a[i]+a[j])-a);
			}
		}
		cout<<ans<<endl;

	}
	
		


	
	return 0;
}