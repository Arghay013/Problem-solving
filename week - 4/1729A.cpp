#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int a,b,c;
    cin>> a >> b>> c;
    int f = a;
    int s = abs(c-b) + c;
    if(f==s){
        cout<<3<<'\n';
    }else if(f > s){
        cout<<2<<'\n';
    }else if(f < s){
        cout<<1<<'\n';
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