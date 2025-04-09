#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    int a[n+1];
    int x = 0;
    map<int, int> mp, mp1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        // mp[a[i]]++;
        // mp1[a[i]] = i;
    }
    for(int i=n-1; i>=0; i--){
        mp[a[i]]++;
        if(mp[a[i]] > 1){
            cout<<i+1<<'\n';return;
        }
    }
    cout<<x<<'\n';
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