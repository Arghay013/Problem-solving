#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,k;cin>>n>>k;
    cout << (n*k) - (k-1) << "\n";
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