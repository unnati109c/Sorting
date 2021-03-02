//  https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> a;
int n, k;

// is it possible to cut out k pieces of length mid??
//If we can cut pieces of length mid, 
//then we can cut pieces of smaller size (since they need less length). 

bool good(double x) {
    double s = 0;
    for(int i=0; i<n; i++) {
        s += floor(a[i]/x);
    }
    return (s >= k);
}

int main() {
    cin >> n >> k;
    a.resize(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    double l = 0, r = 1e8;
    
    for(int i=0; i<100; i++) 
    {
        double mid = (l + r) / 2;
        if(good(mid) == true) 
        {
            l = mid;
        }
        else 
        {
            r = mid;
        }
    }
    cout << setprecision(8) << l << "\n";
    return 0;
}