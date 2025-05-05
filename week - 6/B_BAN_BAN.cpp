#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1 << '\n';
        cout << 1 <<" " << 2 << '\n';
        return;
    }
    if(n==2){
        cout << 1 << '\n';
        cout << 2 <<" " << 6 << '\n';
        return;
    }
    int l=1,r=3*n;
    cout << (n-1)/2 +1 << '\n';
    while(l < r){
        cout << l << " " << r << '\n';
        l+=3;
        r-=3;
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