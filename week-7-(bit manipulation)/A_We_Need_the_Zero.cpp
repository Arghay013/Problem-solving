#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans=a[0];
    for(int i=1; i<n; i++){
        ans ^= a[i];
    }
    for(int i=0; i<n; i++){
        a[i] = (ans ^ a[i]);
    }
    int p=a[0];
    for(int i=1; i<n; i++){
        p^=a[i];
    }
    if(p==0){
        cout << ans << '\n';
    }else{
        cout << -1 << endl;
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