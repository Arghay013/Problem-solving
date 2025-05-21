#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    vector<int> cnt(30,0);
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        cnt[__lg(x)]++;
    }
    ll ans = 0;
    for(int i=0; i<30; i++){
        ans += (1LL * cnt[i] * (cnt[i]-1)) /2;
    }
    cout << ans << '\n';
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