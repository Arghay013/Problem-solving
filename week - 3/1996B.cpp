#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n,k;
    cin>>n>>k;
    string s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i+=k){
        for(int j=0; j<n; j+=k){
            cout<<s[i][j];
        }
        cout<<'\n';
    }
    // cout<<'\n';
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