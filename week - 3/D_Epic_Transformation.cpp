#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1,c=n;
    for(int i=0; i<n/2; i++){
        if(a[i] != a[i + (n+1)/2]){
            c-=2;
        }
    }
    cout<<c<<'\n';
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