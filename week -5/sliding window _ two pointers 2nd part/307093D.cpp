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
    ll ans=0, sum=0;
    ll l=0,r=0;
    while(r < n){
        sum += a[r];
        
        while(sum>=k){
            sum -= a[l];
            l++;
        }
        ans+=l;

        r++;
    }
    cout<<ans<<'\n';
    return 0;
}