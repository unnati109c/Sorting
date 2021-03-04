//  https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool good(ll t, ll arr[], ll n, ll k)
{
	ll no_of_workers=1, curr_work=0;
	for(ll i=0;i<n;i++)
	{
		if(curr_work + arr[i] <= t)
		{
			curr_work+=arr[i];
		}
		else
		{
			no_of_workers++;
			curr_work=arr[i];
		}
	}
	return no_of_workers<=k;

}

ll binary_search_on_answer(ll a[], ll n, ll k)
{
	ll l=*max_element(a,a+n), r=accumulate(a,a+n,0LL), ans=-1;
	while(l<=r)
	{
		ll mid = l + (r-l)/2;
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
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	ll ans = binary_search_on_answer(a,n,k);
	cout<<ans<<endl;

	return 0;
}