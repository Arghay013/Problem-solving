#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i=1; i*i<=(n); i++){
        if(n%i == 0){
            v.push_back(i);
            if(n/i != i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    
    if(v.size()<k){
        cout << -1 << '\n';
    }
    else{
        cout << v[k-1] << '\n';
    }
    return 0;
}