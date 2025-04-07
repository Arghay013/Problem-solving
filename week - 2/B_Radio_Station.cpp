#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    map< string, string > mp;
    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        mp[b] = a;
    }
    for(int i=0; i<m; i++){
        string x,y;
        cin>>x>>y;
        int sz = y.size();
        string tmp = y.substr(0,sz-1);
        cout<<x<<" "<<tmp<<"; #"<<mp[tmp]<<'\n';
    }
    return 0;
}