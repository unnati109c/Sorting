//  https://cses.fi/problemset/task/1620/

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

bool good(ll t, ll arr[], ll n, ll k)
{
	ll p=0;
	for(ll i=0;i<n;i++)
	{
		p+=(t/arr[i]);
	}
	return p>=k;
}

ll binary_search_on_answer(ll a[], ll n, ll k)
{
	ll l=0, r=1e18, ans=0;
	while(l<=r)
	{
		ll mid = (l+r)/2;
		if(good(mid, a,n,k))
		{
			ans = mid;
			r = mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	return ans;

}

int main()
{
	ll n , k;
	cin>>n>>k;

	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}

	ll ans = binary_search_on_answer(a,n,k);
	cout<<ans<<endl;

	return 0;
}