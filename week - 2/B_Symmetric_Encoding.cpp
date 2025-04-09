#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;
    cin >> n;
    string s, temp;
    cin >> s;
    temp = s;
    sort(temp.begin(), temp.end());

    string unique = "";
    unique += temp[0];

    for(int i = 1; i < n; i++){
        if(temp[i] != temp[i-1]){
            unique += temp[i];
        }
    }

    map<char, char> mp;
    int l=0,r=unique.size()-1;
    while(l<=r){
        mp[unique[l]] = unique[r];
        mp[unique[r]] = unique[l];
        l++;r--;
    }
    for(auto u : s){
        cout<<mp[u];
    }cout<<'\n';
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
