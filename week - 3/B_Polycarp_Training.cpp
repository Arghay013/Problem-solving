#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n;
    cin>>n;
    vector<int> a(n);multiset<int> st;
    for(int i=0; i<n; i++){
        cin>>a[i];st.insert(a[i]);
    }
    sort(a.begin(),a.end());
    int mx = *max_element(a.begin(),a.end());
    int c=0;
    for(int i=1; i<=mx;i++){
        if(st.lower_bound(i) == st.end()){
            break;
        }
        else{
            st.erase(st.lower_bound(i));
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}