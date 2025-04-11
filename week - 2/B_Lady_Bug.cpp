#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            if(a[i] == '0')even++;
            if(b[i] == '0')odd++;
        }else{
            if(a[i] == '0')odd++;
            if(b[i] == '0')even++;
        }
    }
    if( ((n+1)/2 <= even) && ((n/2) <= odd)  )cout<<"YES\n";
    else cout<<"NO\n";
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