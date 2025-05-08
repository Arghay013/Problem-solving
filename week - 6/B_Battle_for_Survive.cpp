#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(int i=1; i<=n; i++)cin >> a[i];
    ll sum=0;
    if(n==2){
        cout << a[2] - a[1] <<'\n';
        return;
    }
    for(int i=1; i<=n-2; i++){
        sum += a[i];
    }
    a[n-1] -= sum;
    cout << a[n] - a[n-1] << '\n';
    // cout << sum << '\n';
}
int main() {
    optimize();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}