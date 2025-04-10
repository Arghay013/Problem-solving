#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    string s;
    cin>>s;
    if(s=="US"){
        cout<<"i\n";return;
    }
    string ans = s.substr(0, s.size()-2);
    cout<<ans<<'i'<<'\n';
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