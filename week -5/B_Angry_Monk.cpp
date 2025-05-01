#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[k+1];
    for(int i=0; i<k; i++){
        cin>>a[i];
    }
    sort(a,a+k);
    ll ans=0;
    for(int i=0; i<k-1; i++){
        if(a[i] == 1)ans+=1;
        else{
            ans+=(a[i] + (a[i]-1));
        }
    }
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