#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char, ll> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    bool ok = true;
    while(ok){

        for(char i='a'; i<='z'; i++){
            if(mp[i] >=1){
                cout << i ;
                mp[i]--;
            }
            if(mp[i] == 0){
                mp.erase(i);
            }
            if(mp.size() == 0){
                ok = false;
                break;
            }

        }
    }
    cout << '\n';
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