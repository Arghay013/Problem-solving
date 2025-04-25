#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,k,q;
    cin >> n >> k >>q;
    ll a[n];ll cnt=0;
    vector<ll> v;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++){
        if(a[i] <= q){
            cnt++;
        }else cnt = 0;
        if(cnt >=k && (a[i+1]>q || i==n-1)){
            v.push_back(cnt);
        }
    }
    ll ans=0;
    for(auto u : v){
        if(u<k)continue;
        ll x = u - k + 1;
        ans += ( x * (x+1LL))/2LL;
    }
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