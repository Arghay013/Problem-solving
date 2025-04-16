#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    cout<<"2\n";
    int x=n;
    for(int i=n-1;i>0;i--)
    {
        cout<<x<<" "<<i<<endl;
        x=i+1;
    }
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