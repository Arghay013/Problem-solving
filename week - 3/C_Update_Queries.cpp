#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,m;
    cin>>n>>m;
    string s;cin>>s;
    ll a[m+2];
    for(int i=1; i<=m; i++){
        cin>>a[i];
    }
    sort(a+1, a+m+1);
    string c;cin>>c;
    sort(c.begin(), c.end());
    set<ll> st;
    for(int i=1; i<=m; i++)st.insert(a[i]);
    vector<ll> ls;

    for(auto u:st){
        ls.push_back(u);
    }

    for(int i=0; i<ls.size(); i++){
        s[ ls[i] -1] = c[i];
    }
    cout<<s<<'\n';
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