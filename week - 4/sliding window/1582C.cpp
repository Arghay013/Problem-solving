#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    string s;cin>>s;
    int ans=1e9;
    for(char c='a';c<='z';c++){
        int l=0;
        int r=n-1;
        int cnt=0;
        while(l<=r){
            if(s[l]==s[r]) {l++;r--;}
            else if(s[l]==c) {l++;cnt++;}
            else if(s[r]==c) {r--;cnt++;}
            else{
                cnt=1e9;
                break;
            }
        }
        ans=min(ans,cnt);
    }
    if(ans == 1e9){
        cout<<-1<<'\n';
    }else cout<<ans<<'\n';
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