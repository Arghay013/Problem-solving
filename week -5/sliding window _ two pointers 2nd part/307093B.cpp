#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    ll ans=n+1, sum=0;
    ll l=0,r=0;
    while(r < n){
        sum += a[r];
        if( sum < k){
            r++;
            continue;
        }
            while(sum>=k){
                ans = min(ans, r-l+1);
                sum -= a[l];
                l++;
            }
        
        r++;
    }
    cout << ((ans > n) ? -1 : ans) << '\n';
    return 0;
}