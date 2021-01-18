//Given an array A of N elements, count the number of inversions in the array.
//The inversions of an array indicate how many changes are required to convert the array into its sorted form. 
//It indicates how far the array is from being sorted.

//using MERGE SORT

#include<iostream>
using namespace std;
#define ll long long int
ll temp [200009];
ll merge(ll arr[], ll l, ll mid, ll r)
{
       ll i = l;
       ll j = mid+1;
       
       long swaps=0;
       
       
       ll k=0;
       
       while(i<=mid && j<=r)
       {
              if(arr[i]<=arr[j])
              {
                     temp[k]=arr[i];
                     i++;
                     k++;
              }
              else
              {
                     temp[k]= arr[j];
                     j++;
                     k++;
                     
                     swaps+= (mid-i+1);
              }
       }
       while(i<=mid)
       {
                     temp[k]=arr[i];
                     i++;
                     k++;
       }
       
       while(j<=r)
       {
                     temp[k]= arr[j];
                     j++;
                     k++;
       }
       
       for(ll m= l, p=0; m<=r;m++, p++)
       {
              arr[m]=temp[p];
       }
       
       return swaps;

}

long MergeSortwithcount(ll arr[], ll l, ll r)
{
       long count=0;
       if(l<r)
       {
       ll mid = (l+r)/2;
       
       count+=MergeSortwithcount(arr, l,mid);
       count+=MergeSortwithcount(arr, mid+1, r);
       
       count+=merge(arr, l, mid, r);
       
       return count;
       }
       
       return count;
}

int main()
{
       ll t;
       cin>>t;
       
       while(t--)
       {
             ll n;
             cin>>n;
             
             ll a[n];
             for(ll i=0;i<n;i++)
             {
                    cin>>a[i];
             }
             
             ll c = MergeSortwithcount(a,0,n-1);
             
             cout<<c<<endl;
              
       }
       
       return 0;
}
