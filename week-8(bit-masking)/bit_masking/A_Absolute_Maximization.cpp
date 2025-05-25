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
    int ans=0;
    int AND = a[0];
    for(int i=0; i<n; i++){
        AND&=a[i];
    }
    for(int i=0; i<n; i++){
        // for(int j=i+1; j<n; j++){
            ans |= a[i];
        // }
    }
    cout << ans-AND << '\n';
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