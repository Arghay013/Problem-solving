#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int ans=0, n,m,k;
    cin >> n >> m >>k ;
    int a[m+1];
    for(int i=0; i<=m; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        // int cnt=0;
        // for(int j=i+1; j<m; j++){
            int x = (a[i]^a[m]);
            int cnt = __builtin_popcount(x);
            if(cnt <= k)ans++;
        // }
    }
    cout << ans << '\n';
    return 0;
}