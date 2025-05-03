#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string s1;
    s1.push_back(s[0]);
    ll tmp[2] = {0};
 
    for (ll i = 1; i < n; i++) {
        if (s[i] == s[i - 1] and s[i] == '0')
            continue;
        s1.push_back(s[i]);
    }
 
    for (ll i = 0; i < s1.size(); i++) {
        tmp[s1[i] - '0']++;
    }
 
    cout << ((tmp[1] > tmp[0]) ? "Yes" : "No") << endl;
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