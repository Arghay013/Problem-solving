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
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() and a[st.top()] >= a[i]){
            st.pop();
        }
        if(st.empty()){
            cout << 0 << ' ';
        }else{
            cout << st.top()+1 << ' ';
        }
        st.push(i);
    }
    
    return 0;
}