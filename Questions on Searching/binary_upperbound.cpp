//Given a sorted array, print the maximum index of an array element not greater than the given one

#include<iostream>
using namespace std;
#define ll long long int

int BinarySearch(int arr[], int l, int r, int x)
{
       int ans = -1;
       while(l<=r)
       {
              int mid = (l+r)/2;
              
              if(arr[mid]<= x)
              {
                     ans = mid;
                     
                     l = mid+1;
              }
              else 
              {
                     r = mid-1;
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
