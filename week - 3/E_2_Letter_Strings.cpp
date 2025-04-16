#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    map<string, ll> mp;
    for(int i=0; i<n; i++){
        string s,temp,tmp;
        cin>>s;
        temp = s;tmp=s;
        for(char ch = 'a'; ch<='k'; ch++){
            if(s[0] != ch){
                temp[0] = ch;
                ans+=mp[temp];
            }
            if(s[1] != ch){
                tmp[1] = ch;
                ans+=mp[tmp];
            }
        }


        mp[s]++;
    }
    cout<<ans<<'\n';
}
int main() {
    optimize();
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}