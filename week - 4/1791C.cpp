#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    string s;
    cin >> s;
    int i=0;
    int j=n-1;
    int ans = n;
    while(i<j){
        if(s[i] == s[j])break;
        ans-=2;
        i++;j--;
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