#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n;
    cin >> n;
    map< pair< string, string >, int > mp;
    for(int i=0; i<n; i++) {
        string s,t;
        cin >> s >> t;
        mp[ {s,t} ]++;
    }
    cout<<mp.size()<<endl;
    return 0;
}