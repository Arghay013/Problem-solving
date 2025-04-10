#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    if(n == 100){
        cout<<0<<'\n';
        return;
    }
    if(n%10 == 0){
        cout<<100-n<<'\n';
    }
    else{
        int p = 100-n;
        int x = p/10;
        cout<<x*10<<'\n';
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