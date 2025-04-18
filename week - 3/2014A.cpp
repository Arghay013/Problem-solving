#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n, k;
    cin>>n>>k;
    int a[n];
    int ans=0, rtk=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]==0){
            if(rtk != 0){rtk-=1;ans++;}
        }
        if(a[i]>=k)rtk+=a[i];
    }
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