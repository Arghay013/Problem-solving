#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for(int x = 2; x <= 100; x++){
        int l=0, r = n - 1, cnt = 0;
        while(l < r){
            if(a[l]+a[r] > x) r--;
            else if(a[l]+a[r] < x) l++;
            else{
                cnt++;
                l++;
                r--;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
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