#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0; i<n; i++)cin>> a[i];
    for(int j=0; j<m; j++)cin>> b[j];
    int i=0,j=0,cnt1=0, cnt2=0;long long ans=0;
    while(i <n && j<m){
        int curr = a[i];
        while(i<n && a[i] == curr){
            cnt1++; i++;
                
        }
        while(b[j] < curr)j++;
        while(j<m && b[j] == curr){
            cnt2++; j++;
                
        }
        ans += (1LL * cnt1 * cnt2);
        cnt1=0; cnt2=0;
        
        
    }
    cout<<ans<<'\n';
    return 0;
}