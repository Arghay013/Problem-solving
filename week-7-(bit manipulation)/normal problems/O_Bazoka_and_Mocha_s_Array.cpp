#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> x;
    int idx=INT_MIN;
    for(int i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            idx = i+1;
        }
    }
    if(idx == INT_MIN){
        cout << "YES\n";
        return;
    }
    for(int i=idx; i<n; i++){
        x.push_back(a[i]);
    }
    for(int i=0; i<idx; i++){
        x.push_back(a[i]);
    }
    // for(int i=0; i<n; i++){
    //     cout << x[i] << ' ';
    // }
    if(!is_sorted(x.begin(), x.end())){
        cout << "NO\n";
    }else {
        cout << "Yes\n";
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