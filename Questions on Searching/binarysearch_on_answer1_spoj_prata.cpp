//https://www.spoj.com/problems/PRATA/cstart=20#:~:text=IEEE%20is%20having%20its%20AGM,%3DR%3C%3D8).

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll good(ll mid, ll a[], ll p, ll l)
{
	ll count=0, alloted_time,time_by_cur_chef,paratha_by_cur_chef;
	for(ll i=0;i<l;i++)
	{
		alloted_time=mid;
		paratha_by_cur_chef=0;
		time_by_cur_chef=a[i];

		while(alloted_time>0)
		{
			alloted_time=alloted_time - time_by_cur_chef;
			if(alloted_time>=0)
			{
				paratha_by_cur_chef+=1;
				time_by_cur_chef+= a[i];
			} 
			
		}
		count+= paratha_by_cur_chef;
		if(count>=p) return true;


	}


	return false;
}

ll binarysearch_on_answer(ll a[], ll p, ll len)
{
	ll l = 0 , r = 1e7, ans = 0;
	
	while(l<=r)
	{
		ll mid = l + (r-l)/2;
		if(good(mid, a, p, len))
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
	ll t;
	cin>>t;
	while(t--)
	{
		ll paratha;
		cin>>paratha;
		ll l;
		cin>>l;
		ll arr[l];
		for(ll i=0;i<l;i++)
		{
			cin>>arr[i];
		}

		ll ans = binarysearch_on_answer(arr,paratha,l);
		cout<<ans<<endl;
	}
	return 0;
}

