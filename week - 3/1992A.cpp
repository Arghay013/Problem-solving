#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int a,b,c,x=5;
    cin>>a>>b>>c;
    vector<int> v(3);v[0]=a;v[1]=b;v[2]=c;
    while(x--){
        sort(v.begin(), v.end());
        v[0]+=1;
    }
    cout<<v[0]*v[1]*v[2]<<'\n';
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