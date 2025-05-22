#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll a,b;
    cin >> a >> b;
    ll x = 0;
    ll mn = min(a,b);
    ll MSB = __lg(mn);
    x |= (1<<MSB);
    for(int i=MSB-1; i>=0; i--){
        if( (a&(1<<i)) && (b&(1<<i))){
            x |= (1<<i);
        }
    }
    cout << (a^x) + (b^x) << '\n';
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