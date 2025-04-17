#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    ll a[n+1];
    multiset<ll> m;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)m.insert(a[i]);
    ll ans=0;
    while (!m.empty())
    {
        auto it = *m.begin()+1LL;
        m.erase(m.begin());
        ans++;
        while(!m.empty() && m.find(it)!= m.end()){
            auto x = m.lower_bound(it);
            m.erase(x);
            it++;
        }
    }
    cout<<ans<<'\n';

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