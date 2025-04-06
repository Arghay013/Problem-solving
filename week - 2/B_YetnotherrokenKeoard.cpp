#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    string s;
    cin>>s;
    ll n=s.size();
    stack<ll> capital,small;
    map<ll,char> mp;
    for(ll i=0; i<n; i++){
        if((s[i]>='A'&&s[i]<='Z') && (s[i] != 'B')){
            capital.push(i);
            mp[i]=s[i];
        }
        else if(s[i]=='B' && !capital.empty()){
            mp[capital.top()]='*';
            capital.pop();
        }
        if((s[i]>='a'&&s[i]<='z') && (s[i] != 'b')){
            small.push(i);
            mp[i]=s[i];
        }
        else if(s[i]=='b' && !small.empty()){
            mp[small.top()]='*';
            small.pop();
        }
    }
    for(auto u:mp){
        if(u.second != '*'){
            cout<<u.second;
        }
    }
    cout<<'\n';

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