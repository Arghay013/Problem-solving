#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main() {
    optimize();
    int n,m;
    cin >> n >> m;
    ll a[n], b[m];
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<m; i++)cin >> b[i];
    int l=0,r=0;
    vector<ll> v;
    while(l<n && r < m){
        if(a[l] <= b[r]){
            v.push_back(a[l]);
            l++;
        }
        else if(b[r] < a[l]){
            v.push_back(b[r]);
            r++;
        }
    }
    // if(l != n-1){
        for(int i=l; i<n; i++)v.push_back(a[i]);
    // }
    // if(r!=m-1){
        for(int i=r; i<m; i++)v.push_back(b[i]);
    // }
    for(auto u:v)cout<<u<<" ";
    return 0;
}