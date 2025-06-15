#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0; i<n; i++)cin >> a[i];
    ll l=0,r=0;
    map<ll, ll> mp;
    ll cnt = 0, ans = 0;
    while (r < n)
    {
        if(mp[a[r]] == 0 ){
            cnt++;
        }
        mp[a[r]]++;

        while(cnt > k){
            mp[a[l]]--;
            if(mp[a[l]] == 0)cnt--;
            l++;
        }
        ans += (r-l+1);
        r++;
    }
    cout << ans << '\n';
    return 0;
}