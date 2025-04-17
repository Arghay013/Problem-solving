#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    ll a[n+1];
    for(int i=0; i<n; i++)cin>>a[i];
    priority_queue<ll> pq;
    ll ans=0;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            pq.push(a[i]);
        }
        if(a[i] == 0 && !pq.empty()){
            ans+=pq.top();
            pq.pop();
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