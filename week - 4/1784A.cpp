#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ans=0;
    // ans += (a[0] -1);
    ll x = 2;
    ll b[n+1];
    b[0] = 1;
    for(int i=1; i<n; i++){
        // if(a[i] > x){
        //     ans += (a[i] - x);
        // }
        b[i] = min(b[i-1]+1, a[i]);
        // if(b[i] != a[i]){
        //     x++;
        // }

    }
    for(int i=0; i<n; i++)ans += (a[i] - b[i]);
    cout<<ans<<'\n';

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