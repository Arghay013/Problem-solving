#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n , k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    int sum=0,l=0,r=0,c=-1;
    while(r < n){
        sum += a[r];
        while(sum > k && l<=r){
            sum-=a[l];
            l++;
        }
        if(sum == k)c = max(c, (r-l+1));
        r++;
    }
    if(c==-1)cout<<c<<'\n';
    else cout<<n-c<<'\n';
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