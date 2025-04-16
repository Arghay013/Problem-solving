#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,m,q;
    cin >> n >> m >> q; 
    vector<ll> v(m);
    for(int i=0; i<m; i++)cin>>v[i];
    sort(v.begin(), v.end());
    while(q--){
        ll x;
        cin>>x;
        if(x < v[0]){
            cout<<abs(1 - v[0])<<'\n';continue;
        }
        if(x > v[m-1]){
            cout<<abs(n - v[m-1])<<'\n';continue;
        }
        auto u = lower_bound(v.begin(), v.end(), x);
        ll right = *u;
        auto l = --u;
        ll left = *l;
        ll mid = (left + right)/2; 
        cout << min( abs(mid - left),abs(mid - right) )<<'\n';
    }
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