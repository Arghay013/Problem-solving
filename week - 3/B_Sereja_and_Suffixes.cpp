#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,m;
    cin>>n>>m;
    int a[n];
    vector<int> ans(n);
    set<int> st;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=n-1; i>=0; i--){
        st.insert(a[i]);
        ans[i] = st.size();
    }
    for(int i=0; i<m; i++){
        int p;
        cin>>p;
        cout<<ans[p-1]<<'\n';
    }
    return 0;
}