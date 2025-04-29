#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    ll a[n+1];a[0] = 0;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++)a[i] = a[i-1]+a[i];
    // for(int i=0; i<=n; i++)cout<<a[i]<<" ";cout<<endl;
    string s;
    cin >> s;
    ll l=0,r=n-1;
    ll fl,fr;
    ll ans = 0;
    while(l<r){
        if(s[l] == 'L' && s[r] == 'R'){
            // cout<<a[r+1]<<" "<<a[l]<<'\n';
            ans += (a[r+1] - a[l]);
            l++;
            r--;
        }
        if(s[l] != 'L')l++;
        if(s[r] != 'R') r--;
    }
    cout<< ans << '\n';
    

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