#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n, m;
    cin >> n >> m;
    if(n > m){
        cout << "NO\n";
        return;
    }
    if(n%2){
        cout << "YES\n";
        for(int i=1; i<=n-1; i++){
            cout << 1 << ' ';
        }
        cout << m-n+1 << '\n';
        return;
    }
    if(n%2==0 && m%2!=0){
        cout << "NO\n";
        return;
    }
    if(n%2==0 && m%2==0){
        cout << "YES\n";
        for(int i=1; i<=n-2; i++){
            cout << 1 << ' ';
        }
        cout << (m-n+2)/2 << ' ' << (m-n+2)/2 << '\n';
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