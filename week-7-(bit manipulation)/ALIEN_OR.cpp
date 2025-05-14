#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n, k;
    cin >> n >> k;
    set<string> s;
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }
    string tmp = "";
    for(int i=0; i<k; i++)tmp+='0';
    for(int i= 0; i<k; i++){
        tmp[i] = '1';
        // cout << tmp << '\n';
        if(s.find(tmp) == s.end()){
            cout << "NO\n";
            return;
        }
        tmp[i] = '0';
    }
    cout << "YES\n";
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