#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll ans(ll l, ll r){
    ll temp=0;
    for(int i=32; i>=0; i--){
        ll x = ((1LL<<i)&l)?1:0;
        ll y = ((1LL<<i)&r)?1:0;
        if(x^y){
            temp = (1<<i);
            temp |= (temp-1);
            break;
        }
    }
    return temp|l;
}

void solve(){
    ll n,m;
    cin >> n >> m;
    if(m==0 && n>=0){
        cout << n << '\n';
        return;
    }
    ll l = max(0LL,(n-m));
    ll r = n+m;
    cout << ans(l,r) << '\n';
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