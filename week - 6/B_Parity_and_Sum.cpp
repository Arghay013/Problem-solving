#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n;
    cin >> n;
    vector<ll> even,odd;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    // for(auto u : even) cout << u << ' ';
    // cout << endl;
    // for(auto u : odd) cout << u << ' ';
    // cout << endl;
    if(even.size()==0 || odd.size()==0){
        cout << 0 << endl;
        return;
    }
    ll c=0;
    ll mx = odd[0];
    for(int i = 0; i < even.size(); i++){
        if(even[i] > mx){
            cout << even.size()+1 << '\n';
            return;
        }
        mx = even[i] + mx;
        // cout <<"MX-> "<< mx << ' ';
    }
    cout << even.size() << '\n';

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