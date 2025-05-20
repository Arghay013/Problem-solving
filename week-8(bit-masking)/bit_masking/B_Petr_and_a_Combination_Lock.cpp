#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (int mask = 0;mask < (1 << n);mask++) {
        // cout << mask << " -> ";
        int ans=0;
        for (int k = 0;k < n;k++) {
            if ((mask >> k) & 1) {
                ans+=a[k];
            }
            else {
                ans-=a[k];
            }
        }
        if(ans%360==0){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}