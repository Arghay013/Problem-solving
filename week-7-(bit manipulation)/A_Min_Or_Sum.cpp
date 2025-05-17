#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int mx = *max_element(a,a+n);
    int mn = *min_element(a,a+n);
    if(mx == mn){
        cout << mx << '\n';
        return;
    }
    // cout << mx << '\n';
    // int x = __lg(mx);
    // cout << x << '\n';
    ll ans=0;
    for(int i=0; i<n; i++){
        ans |= a[i];
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