#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    string s = "";
    for(int i=0; i<v.size(); i++){
        s+=to_string(v[i]);
    }
    reverse(s.begin(), s.end());
    int x = 4 - s.size();
    
    for(int i=0; i<x; i++){
        s = "0"+s;
    }
    
    cout<<s;

    return 0;
}