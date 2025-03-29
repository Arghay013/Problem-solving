#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    vector<long long> v(n),ps(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=1; i<=n; i++){
        ps[i] = ps[i-1]+v[i-1];
    }
    bool ok = false;
    if(ps[n] %2 == 0){
        cout<<ps[n]<<endl;
        return 0;
    }else{
        for(int i=0; i<n; i++){
            if(v[i]%2 != 0){
                ok = true;
                cout<<ps[n] - v[i]<<endl;
                return 0;
            }
        }
    }
    if(!ok){
        cout<<0<<endl;
    }
    return 0;
}