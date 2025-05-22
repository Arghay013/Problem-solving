#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a+n);
    ll x = a[n/2];
    ll sum=0;
    for(int i=0; i<n; i++){
        sum += abs(x - a[i]);
    }
    cout << sum << '\n';
    return 0;
}