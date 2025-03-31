#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i] && !(s1[i] == 'B' && s2[i] == 'G') && !(s1[i] == 'G' && s2[i] == 'B')) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}