#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    vector< pair<int , string>> p;
    for(int i=0; i<n; i++){
        int x;string s;
        cin>>x; cin>>s;
        for(int j=0; j<s.size(); j++){
            if(s[j] == 'D'){
                a[i]+=1;
                if(a[i] > 9) a[i] = 0;
                else if(a[i] < 0) a[i] = 9;
            }else if(s[j] == 'U'){
                a[i]-=1;
                if(a[i] > 9) a[i] = 0;
                else if(a[i] < 0) a[i] = 9;
            }
        }
        
    }
    // for(auto u:p){
    //     int x = u.first;
    //     string s = u.second;
    //     for(int i=0; i<n; i++){
    //         // int d = a[i];
    //         for(int j=0; j<s.size(); j++){
    //             if(s[j] == 'D'){
    //                 a[i]+=1;
    //                 if(a[i] > 9) a[i] = 0;
    //                 else if(a[i] < 0) a[i] = 9;
    //             }else if(s[j] == 'U'){
    //                 a[i]-=1;
    //                 if(a[i] > 9) a[i] = 0;
    //                 else if(a[i] < 0) a[i] = 9;
    //             }
    //         }
    //         // a[i] = d;
    //     } 
    // }
    for(auto u:a)cout<<u<<" ";
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}