#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int mx = 0;
    int ans=0;
    set<int> st;
    for(int i=0,j=0; i<n && j<n; ){
        if(st.find(a[j]) == st.end()){
            st.insert(a[j++]);
            ans = max(ans, j-i+1);
        }else{
            st.erase(a[i++]);
        }
    }
    cout << ans-1;
    return 0;
}