#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    string s;
    cin >> s;
    int sz = s.size();
    // cout << "SZ = "<<sz << '\n';
    int ans =  (1<<sz)-1;
    // cout << ans << '\n';
    for(int i=sz-1, j=0; i>=0;j++, i--){
        // cout << s[i] << ' ';
        if(s[i] == '7'){
            // cout << j << ' ';
            ans += (1<<j);
        }
        // cout << '\n';
    }
    cout << ans << '\n';
    return 0;
}