#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans=0, i=0;
    while(i < n){
        if(s[i] == 'B'){
            i+=k;
            ans++;
        }
        else i++;
    }
    cout<<ans<<'\n';
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