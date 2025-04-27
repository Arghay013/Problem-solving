#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,k;
    cin >> n >> k;
    multiset<ll> ml;
    ll a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    ll l=0,r=0,ans=0;
    while(r < n){
        ml.insert(a[r]);
        ll mn=*ml.begin(), mx = *ml.rbegin();
        if( (mx-mn) <= k){
            ans += (r-l+1);
        }else{
            while(l<=r){
                mn = *ml.begin(), mx = *ml.rbegin();
                if(mx-mn <= k)break;
                if(mx-mn > k)
                { 
                    ml.erase(ml.find(a[l]));
                    l++;
                }
            }
            mn=*ml.begin(); mx = *ml.rbegin();
            if( (mx-mn) <= k){
                ans += (r-l+1);
            }
        }
        r++;
    }
    cout << ans << '\n';
}
int main() {
    optimize();
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}