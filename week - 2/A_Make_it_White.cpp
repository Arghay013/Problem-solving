#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int l=-1,r = 11;
    bool ok = 0;
    int c = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='B')c++;
        if(s[i]=='B' && !ok){
            l = i;
            ok=1;
        }
        if(ok && s[i]=='B'){
            r = i;
        }

    }
    if(c==0){
        cout<<0<<'\n';
    }else if(c==1){
        cout<<1<<'\n';
    }else{
        cout<<r-l+1<<'\n';
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}