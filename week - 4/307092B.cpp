#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++)cin>>b[i];
    int c=0, i=0, j=0;
    vector<int> v;
    while(j<m){
        while(i < n && a[i] < b[j]) {
            c++;
            i++;
        }
            j++;
        
        // cout<<"i j->"<<i<<" "<<j;
        // cout<<'\n'<<c<<'\n'<<'\n';
        v.push_back(c);
    }
    // int x = m-j;
    // while(x--){
    //     v.push_back(c);
    // }
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    return 0;
}