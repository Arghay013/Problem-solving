#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<string,int> mp;
void solve(){
    string s;
    cin>>s;
    mp[s]++;
    if(mp[s] != 1){
        cout<<s<<mp[s]-1<<'\n';
    }else{
        cout<<"OK\n";
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