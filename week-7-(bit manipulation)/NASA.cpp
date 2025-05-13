#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx = 15;
vector<int> pl;
void makePl(){
    for(int i=0;i<(1<<mx);i++){
        string s=to_string(i);
        string temp=s;
        reverse(s.begin(),s.end());
        if(temp==s){
            pl.push_back(i);
        }
    }
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll ans = n;
    for(int i=0; i<n; i++){
        for(auto u : pl){
            ans += mp[u ^ a[i]];
        }
    }
    cout << ans/2 << '\n';
}
int main() {
    optimize();
    makePl();
    // for(auto u : pl)
    // cout << pl.size() << ' ';
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}