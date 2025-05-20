#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll c=0; 
    ll l=0,j=n-1;
    while(l <= j){
        if(a[j] + a[l] <=k){
            c++; l++; j--;
        }else{
            c++;j--;
        }
    }
    cout << c << '\n';
    return 0;
}