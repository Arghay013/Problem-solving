#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    int n,w;
    cin>> n >> w;
    int a[n];
    multiset<int> s;
    for(int i=0; i<n; i++){
        cin>> a[i];
        s.insert(a[i]);
    }
    int h=0;
    while(!s.empty()){
        h++;
        int now = *(--s.end());
        s.erase(--s.end());
        int left = w-now;
        if(s.empty())goto f;
        while(1){
            auto it = s.upper_bound(left);
            if(it == s.begin())break;
            --it;
            left -= *it;
            s.erase(it);
            if(s.empty())goto f;
        }
    }
    f:;
    cout<<h<<'\n';
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