#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n,a;
    cin>>n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {cin>>a; mp[a]++;}
    if (!mp[0] || (mp[0] <= ((n - 1) / 2 )+ 1)) cout<<0<<'\n';
    else if (mp[0] + mp[1] < n || (mp[0] == n)) cout<<1<<'\n';
    else cout<<2<<'\n';
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