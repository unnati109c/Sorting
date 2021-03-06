//Given a sorted array, print the minimum index of an array element not less than the given one

#include<iostream>
using namespace std;
#define ll long long int

int BinarySearch(int arr[], int l, int r, int x)
{
       int ans = -1;
       while(l<=r)
       {
              int mid = (l+r)/2;
              
              if(arr[mid]>= x)
              {
                     ans = mid;
                     r = mid-1;
              }
              else 
              {
                     l = mid+1;
              }
              
              
       }
       return arr[ans];
     
}


int main()
{
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
              cin>>arr[i];
       }
       
       int target;
       cin>>target;
       int ans = BinarySearch(arr,0,n-1,target);
       cout<<ans<<endl;
        
       return 0;
}
