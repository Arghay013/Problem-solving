#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    ll ans=0;
    map<ll, ll> mp;
    ll l=0,r=0;
    while(r<n){
        mp[a[r]]++;
        // if(mp.size()<=k)ans += (r-l+1);
        while(mp.size() > k){
            // ans += (r-l+1);
            mp[a[l]]--;
            if(mp[a[l]] == 0)mp.erase(a[l]);
            l++;
        }
        if(mp.size()<=k)ans += (r-l+1);
        r++;
    }
    cout<<ans<<'\n';
}
int main() {
    optimize();
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}