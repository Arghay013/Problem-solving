#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
 
    string s = "aeiou",ans;
 
    while(n>=5)
    {
        ans+=s;
        n-=5;
    }
 
    for(int i=0;i<n;i++)ans+=s[i];
    sort(ans.begin(),ans.end());
    cout<<ans<<endl;
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