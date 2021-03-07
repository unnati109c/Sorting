//  https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll good(ll mid, ll x, ll y, ll n)
{
	return (mid/x +mid/y) >=n-1;
}

ll binarysearch_on_answer(ll n, ll x, ll y)
{
	if(n==1) 
		return min(x,y);
	ll l = 0 , r = max(x,y)*n, ans = n;
	
	while(l<=r)
	{
		ll mid = l + (r-l)/2;
		if(good(mid, x,y,n))
		{
			ans = mid;
			r = mid-1;
		}
		else
		{
			l = mid+1;
		}
	}
	return ans + min(x,y);
}

int main()
{
	cout<<binarysearch_on_answer(4,1,1);
	return 0;
}

