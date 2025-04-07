#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,z;
    cin>>n;z=n;
    vector<string> v;
    map<string, int> mp;
    while(n--){
        string s;
        cin>>s;
        
        v.push_back(s);
        
    }
    reverse(v.begin(), v.end());
    // for(auto u:v)cout<<u<<'\n';
    for(int i=0; i<z; i++){
        mp[v[i]]++;
        if(mp[v[i]] == 1)cout<<v[i]<<'\n';
    }
    // for(auto u : v)cout<<u<<'\n';
    return 0;
}