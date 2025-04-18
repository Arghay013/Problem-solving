
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    ll t=1;
    cin>>n;
    if(n<4){
        cout<<1<<'\n';return;
    }
    ll ans=1;
    while(n>=4){
        n/=4;
        ans*=2;
    }
    cout<<ans<<'\n';
    // t++;
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