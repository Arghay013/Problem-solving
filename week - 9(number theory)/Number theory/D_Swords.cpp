#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    long long n;
    cin >> n;
    // cout << n;
    long long a[n];
    for(long long i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long mx = a[n-1];
    long long g=0;
    for(int i=0; i<n; i++){
        g = __gcd(g, mx-a[i]);
    }
    long long z = g;
    long long y=0;
    for(int i=0; i<n; i++){
        y += (mx-a[i]);
    }
    cout << y/g <<' '<< z << '\n';
    return 0;
}