#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    bool got=false;
    ll zt=0,zb=0;
    for(ll i=n-1; i>=0; i--){
        if(s[i]!='0'){
            got=true;
        }
        if(s[i] == '0' && !got){
            zt++;
        }
        if(s[i]!='0' && got)zb++;
    }
    // cout<<zb<<' ';
    cout<< (zb+zt)-1 <<'\n';
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