#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    vector<ll> v;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(i%2 == 0){
            v.push_back(a[i]);
        }
    }
    if(n == 1){
        cout << a[0] << "\n";
        return;
    }
    sort(v.begin(), v.end(), greater<ll>());
    cout << v[0] << "\n";
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