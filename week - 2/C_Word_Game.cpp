#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n;
    cin>>n;
    map<string, int> mp;
    vector<vector<string>> v(3, vector<string>(n));
    for(int i=0; i<3; i++){
        for(int j=0; j<n; j++){
            string s;
            cin>>s;
            v[i][j] = s;
            mp[s]++;
        }
    }
    for(int i=0; i<3; i++){
        int c=0;
        for(int j=0; j<n; j++){
            if(mp[ v[i][j] ] == 1){
                c+=3;
            }if(mp[ v[i][j] ] == 2){
                c+=1;
            }
        }
        cout<<c<<" ";
    }
    cout<<'\n';
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