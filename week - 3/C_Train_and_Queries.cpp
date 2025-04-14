#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n,q;
    cin>>n>>q;
    ll a[n+3];
    map<ll, ll> first, sec;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(first[a[i]] == 0)first[a[i]] = i;
        sec[a[i]] = i;
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        if(first[x]>0 && sec[y]>0 && first[x]<sec[y])cout<<"YES\n";
        else cout<<"NO\n";
    }

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