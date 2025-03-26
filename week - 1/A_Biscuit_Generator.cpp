#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,t;
    cin >> a >> b >> t ;
    if((int)(t/a) > 0)
    cout << (int)(t/a)*b << endl;
    else cout<<0;
    return 0;
}