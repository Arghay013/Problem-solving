#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin>>s;
    int c=0;
    int a[26];
    for(int i=0; i<26; i++) a[i] = 0;
    for(int i=0; i<s.size(); i++){
        a[s[i] - 'a'] ++;
    }
    for(int i=0; i<26; i++){
        if(a[i] % 2 != 0) c++;
    }
    if(c > (k+1))cout<<"NO\n";
    else cout<<"YES\n";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}