// https://codeforces.com/contest/474/problem/B

#include <bits/stdc++.h>
using namespace std;

int a[100000],n,m,q,sum[100000]={0};
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i];
	}
	cin>>m;
	while(m--){
		cin>>q;
		cout<<lower_bound(sum+1,sum+n+1,q)-sum<<endl;
	}
	return 0;
}

 	 	     	 				 	 	   		 		  	
