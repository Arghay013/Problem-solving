#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin>>n;
    n--;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<ll>ans;
    ans.push_back(v[0]);
    for(int i=0;i<n-1;i++)ans.push_back((v[i]|v[i+1]));
    ans.push_back(v.back());
    bool ok=1;
    for(int i=0;i<ans.size()-1;i++){
        if((ans[i]&ans[i+1])!=v[i]){
            ok=0;
            break;
        }
    }
    
    if(ok) {  
        for(auto u:ans)cout<<u<<" ";
        cout<<endl;
    }else cout<<-1<<endl;
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