#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c0=0, c1=0;
    for(int i=0; i<n ; i++){
        if(s[i] == '0'){
            if( i==0 || s[i-1]!='0') c0++;
        }else{
            if( i==0 || s[i-1]!='1') c1++;
        }
    }
    // if((s[0] == s[n-1]) && c>2){
    //     cout<<max(0, c-2)<<'\n';
    // }else
    cout<<min(c0, c1)<<'\n';
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