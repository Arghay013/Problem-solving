#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int one=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            one++;
        }
    }
    int ans=0;
    if(one % 2 == 0){
        ans += (one/2);
        ans += (n - one);
        cout<<ans<<endl;
    }else{
        ans += (one/2);
        ans += 1;
        ans += (n-one);
        cout << ans << endl;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}