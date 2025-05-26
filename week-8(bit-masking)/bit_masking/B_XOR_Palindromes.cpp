#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=0,r=n-1;
    int lagbei=0, pairs = 0;
    while(l < r){
        if(s[l] == s[r])pairs += 2;
        else lagbei += 1;
        l++;r--;
    }
    string ans = "";
    // cout << lagbei << '\n';
    for(int i=0; i<=n ; i++){
        int ache = i;
        if( ache < lagbei){
            ans+='0';
        }else{
            ache -= lagbei;
            ache =  max((ache%2), (ache-pairs));
            ache = max(0, ache - (n%2));
            if(!ache){
                ans+='1';
            }else{
                ans += '0';
            }
        }
    }
    cout << ans << '\n';
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