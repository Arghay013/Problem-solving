#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    long long l,r; cin >> l >> r;
    cout << "YES\n";
    long long i=l,j=l+1;
    while(j!=r && i!=r-1){
        cout << i << ' ' << j << '\n';
        i+=2; j+=2;
    }
    cout << r-1 << ' ' << r;
    return 0;
}