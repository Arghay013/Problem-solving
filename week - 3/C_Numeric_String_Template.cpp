#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll m;
    cin>> m;
    while(m--){
        string s;
        cin>>s;
        map<char, int> mp;
        map<ll, char> sp;
        if(s.size() != n){
            cout<<"NO\n";
            continue;
        }
        bool ok=true;
        for(int i=0; i<s.size(); i++){
            if(!mp.count(s[i]) && !sp.count(a[i])){
                mp[s[i]] = a[i];
                sp[a[i]] = s[i];
            }
            if((mp.count(s[i]) && mp[s[i]] != a[i]) || (sp.count(a[i]) && sp[a[i]] != s[i])){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout<<"NO\n";continue;
        }
        cout<<"YES\n";
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