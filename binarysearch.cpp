#include<iostream>
using namespace std;
#define ll long long int

int BinarySearch(int arr[], int l, int r, int x)
{
       while(l<=r)
       {
              //int mid = (l + (r - l))/2;

              int mid = (l+r)/2;
              if(arr[mid]>x)
              {
                     r = mid-1;
              }
              else if(arr[mid]<x)
              {
                     l = mid+1;
              }
              else 
              return arr[mid];
       }
       return -1;
}


int main()
{
       int arr[]={1,3,5,7,9,13,15};
       
       int x = 5;
       
       int l=0;
       int r=6;
       
       int ans = BinarySearch(arr, l, r, x);
              
       if(ans==-1) 
       cout<<"NOT FOUND";
       else cout<<"FOUND";
       
       
       
       
       return 0;
}
