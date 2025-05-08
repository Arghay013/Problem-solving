#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> s(k);
    for(ll i=0;i<k;i++){
        cin>>s[i];
    }
    if(k==1 or n==1){
        cout<<"YES"<<endl;
    }
    else{
        vector<ll> v(n,0);
        ll j=n-1;
        for(int i=k-1;i>=1;i--){
            v[j]=s[i]-s[i-1];
            j--;
        }
        while(j>=0){
            v[j]=v[j+1];
            s[0]-=v[j];
            j--;
        }
    
        v[0]+=s[0];
        if(is_sorted(v.begin(),v.end())){
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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