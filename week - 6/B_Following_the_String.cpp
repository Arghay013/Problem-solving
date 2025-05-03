#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    ll mp[26] = {0};
    string s = "";
    for(int i=0; i<n; i++){
        int x = a[i];
        for(char j='a'; j<='z'; j++){
            int idx = j-'a';
            if(x == mp[idx]){
                s += j;
                mp[idx]++;
                break;
            }
        }
    }
    cout<< s << endl;
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