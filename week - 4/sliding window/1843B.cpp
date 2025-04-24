#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    ll a[n];ll sum=0,c=0;
    for(int i=0; i<n; i++){cin >> a[i];sum+=abs(a[i]);}
    for(int i=0; i<n; i++){
        if(a[i] < 0){
            c++;
            while(i<n && a[i] <=0)i++;
        }
    }
    cout << sum <<" " << c <<'\n';
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