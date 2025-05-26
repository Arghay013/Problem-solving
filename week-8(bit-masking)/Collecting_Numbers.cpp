#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n;
    cin >> n;
    int a[n+1], pos[n+1];
    for(int i=1; i<=n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }int ans=1;
    for(int i=1; i<n; i++){
        if(pos[i] > pos[i+1]){
            ans++;
        }
    }
    cout << ans ;
    return 0;
}