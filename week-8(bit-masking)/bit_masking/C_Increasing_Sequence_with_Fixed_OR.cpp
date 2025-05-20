#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;

    deque<ll> ans;
    ll mx = __lg(n);
    for(int i=0; i<=mx; i++){
        if((n>>i) & 1){
            ll x = n - (1<<i);
            if(x > 0){
                ans.push_front(x);
            }
        }
    }
    ans.push_back(n);
    cout << ans.size()<< '\n';
    for(auto u : ans){
        cout << u << ' ';
    }
    cout << '\n';
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