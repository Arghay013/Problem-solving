#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll a,b,n,s;
    cin >> a>> b >> n >> s;
    ll x = (a*n) + b;
    if(x<s){
        no;
        return;
    }
    if(s%n <= b){
        yes;
    }else no;
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