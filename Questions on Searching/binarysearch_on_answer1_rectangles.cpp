//   https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

ll good(ll mid, ll n, ll w, ll h)
{
	return ((mid/w)*(mid/h)) >= n;
}

ll binarysearch_on_answer(ll n, ll w, ll h)
{
	ll l = 0 , r = max(w,h)*n, ans = n;
	
	while(l<=r)
	{
		ll mid = l + (r-l)/2;
		if(good(mid, n, w, h))
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
	cout<<binarysearch_on_answer(1,10,1);
	return 0;
}

