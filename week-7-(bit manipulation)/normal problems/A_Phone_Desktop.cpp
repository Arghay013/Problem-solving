#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll x,y; 
    cin>>x>>y;
    ll c=(y/2); 
    x-=7*(y/2);
    if(y%2) {
        c++;
        x-=11;
    }
    if(x<=0) cout<<c<<endl;
    else{
        c+=(x/15);
        if(x%15) c++;
        cout<<c<<endl;
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