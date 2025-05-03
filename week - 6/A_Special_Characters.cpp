#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin >> n;
    if(n%2 != 0){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    string s="";
    int x = n/2;
    x--;
    for(int i=0; i<n; i+=2){

        s += "AAB";
    }
    cout << s << endl;

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