#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=0; i<n; i++){
        ll x = (i+1) + a[i];
        if(x>m)break;
        m -= x;
        ans++;
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