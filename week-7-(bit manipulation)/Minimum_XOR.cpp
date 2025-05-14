#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin >> a[i];
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans ^= a[i];
    }
    // cout << ans << '\n';
    ll total = ans;
    for(int i=0; i<n; i++){
        total = min(total , (ans^a[i]));

    }
    cout << total << '\n';
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