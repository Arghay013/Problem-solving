#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    string s,ans="";
    cin>>s;
    // int x = stoi(s);
    for(int i=n-1; i>=0; i--){
        if(s[i] == '0'){
            string x="";
            x += s[i-1];
            x += s[i-2];
            i-=2;
            reverse(x.begin(), x.end());
            int num = stoi(x);
            ans += char('a' + num - 1);
        }else{
            string xx = "";
            xx += s[i];
            int y = stoi(xx);
            ans+= char('a' + y - 1);
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<'\n';
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