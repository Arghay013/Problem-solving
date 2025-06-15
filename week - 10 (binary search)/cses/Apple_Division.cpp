#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n; vector<ll> v;
ll solve(ll i, ll sum1, ll sum2){
    if(i==n){
        return abs(sum1-sum2);
    }
    ll x = solve(i+1, sum1+v[i], sum2);
    ll y = solve(i+1, sum1, sum2+v[i]);
    return min(x,y);
}
int main() {
    optimize();
    cin >> n;
    for(ll i=0; i<n; i++){
        ll val;cin>>val;v.push_back(val);
    }
    cout << solve(0,0,0);
    return 0;
}