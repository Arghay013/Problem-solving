#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(n-1));
    map<int,int> mp;
    int ans;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            cin >> v[i][j];
            if(j==0){
                mp[v[i][0]]++;
                if(mp[v[i][0]]>1) ans = v[i][0];
            }
        }
    }
    cout << ans << " ";
    for(int i=0; i<n; i++){
        if(v[i][0]!=ans){
            for(auto u: v[i]) {cout << u << " ";}
            cout << '\n';
            return;
        }
    }
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