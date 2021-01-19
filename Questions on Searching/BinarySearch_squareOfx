//Given a value x, tell if x is a square of an integer or not

#include<iostream>
using namespace std;
#define ll long long int

string BinarySearch(int l, int r, int x)
{
       while(l<=r)
       {
              int mid = (l+r)/2;
              
              if((mid*mid) > x)
              {
                     r = mid-1;
              }
              else if((mid*mid) < x)
              {
                     l = mid+1;
              }
              else 
              return "YES";
       }
       return "NO";
}


int main()
{
       int x;
       cin>>x;
       string ans = BinarySearch(0,x,x);
       cout<<ans<<endl;
        
       return 0;
}
