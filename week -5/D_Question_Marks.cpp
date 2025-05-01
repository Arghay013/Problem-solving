#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a=0,b=0,c=0,d=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A')a++;
        if(s[i] == 'B')b++;
        if(s[i] == 'C')c++;
        if(s[i] == 'D')d++;
    }
    cout<<min(a,n) + min(b,n) + min(c,n) + min(d,n)<<endl;
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