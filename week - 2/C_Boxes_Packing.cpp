#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,a;
    map<int,int>mp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        mp[a]++;
    }
    int ans = 0,temp;
    for(auto u : mp){
        temp = u.second;
        ans = max(ans,temp);
    }
    cout<<ans<<endl;
    
    return 0;
}