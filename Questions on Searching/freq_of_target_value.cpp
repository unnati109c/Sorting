#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int arr[9] = {1,2,2,3,3,3,3,5,10};
	int ans =-1;
	int lb = lower_bound(arr,arr+9,2)-arr;
	int ub = upper_bound(arr,arr+9,2)-arr;
	cout<<ub-lb<<endl;
	return 0;
}