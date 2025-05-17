#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N =1e2+10;
int n;
int a[N];
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int res=a[1];
    for(int i=2;i<=n;i++)res&=a[i];
    cout<<res<<endl;
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