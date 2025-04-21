#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n; cin>>n;
    ll d = (n*(n-1))/2;
    vector<ll>v(d);
    map<ll,ll>mp;
    for(ll i=0; i<d; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll i=n-1;
    for(auto u:mp){
        while(u.second!=0){
            u.second-=i; i--;
            cout<<u.first<<' ';
        }
 
    }
    cout<<1000000000<<endl; 
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