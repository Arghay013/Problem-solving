#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll ans=b;
    for(int i=0;i<n;i++){
        if(v[i]+1<a)ans+=v[i];
        else ans+=a-1;
    }
    cout<<ans<<endl;
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