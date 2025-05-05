#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n,k;
    cin>>n>>k;
    int a=n-k;
    for(int i=a;i>=1;i--)
    {
        cout<<i<<" ";
    }
    for(int i=a+1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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