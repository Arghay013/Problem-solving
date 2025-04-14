#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int mn = 1, mx = n;
    int l = 0,r = n-1;
 
    while(r>l) {
        if(v[l] != mn && v[l] != mx && v[r] != mn && v[r] != mx) {
            cout << l+1 << " " << r+1 << '\n';
            return;
        }
 
        if(v[l] == mn || v[l] == mx) {
            if(v[l] == mn) {
                mn++;
            }else if(v[l]==mx) mx--;
            l++;
        }
 
        if(v[r] == mn || v[r] == mx) {
            if(v[r] == mn) mn++;
            else if(v[r] == mx) mx--;
            r--;
        }
    }
    if(l==r){cout<<-1<<'\n';return;}
    cout << -1 << endl;
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