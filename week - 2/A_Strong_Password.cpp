#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    string s;
    cin>>s;
    char c = s[s.size()-1];
    // cout<<c;
    if(s.size() == 1){
        cout<<s;
        if(s != "a")cout<<"a\n";
        else cout<<"b\n";
    }else{
        int sz = s.size();
        int idx = INT_MIN;
        for(int i=1; i<sz; i++){
            if(s[i] == s[i-1]){
                idx = i;
            }
        }
        if(idx == INT_MIN){
            if(c == 'a')cout<<s+"b\n";
            else cout<<s+"a\n";
        }else{
            cout<<s.substr(0,idx);
            if(s[idx] == 'a') cout<<'b'<<s.substr(idx);
            else cout<<'a'<<s.substr(idx);
            cout<<'\n';
        }
    }
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