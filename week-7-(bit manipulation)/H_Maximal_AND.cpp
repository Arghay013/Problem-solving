#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 30;
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    ll ans=0,AND=(1 << 31) - 1;
    // cout << __lg(AND)<<'\n';
    vector<int> bits(mx+1);
    for(int i=0; i<n; i++){
        for(int j=mx; j>=0; j--){
            if((v[i] >> j) & 1){
                bits[j]++;
            }
        }
    }
    for(int i=mx; i>=0; i--){
        if(bits[i] == n){
            ans += (1LL<<i);
        }
        else {
            if(n-bits[i] <= k){
                ans += (1LL << i);
                k-=(n-bits[i]);
            }
        }
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