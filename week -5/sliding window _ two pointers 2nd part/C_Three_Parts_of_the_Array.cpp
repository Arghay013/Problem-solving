#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    ll n;
    cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll l=0, r = n - 1;
    ll sl=0, sr = 0, ans=0;
    while(l <= r){
        // sr += a[r];
        // sl += a[l];
        if(sl <= sr){sl+=a[l];l++;}
        else if(sl > sr){sr+=a[r];r--;}
        if(sl == sr){
            ans = max(ans, sl);
        }
        
    }
    cout << ans << '\n';
    return 0;
}