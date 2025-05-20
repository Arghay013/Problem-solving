#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(n), a(m);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    sort(v.begin(), v.end());
    sort(a.begin(), a.end());
    int i = 0, j = 0, c = 0;

    while(i < n && j < m){
        if(abs(v[i] - a[j]) <= k){
            c++;
            i++;
            j++;
        }
        else if(a[j] < v[i] - k){
            j++;
        }
        else{
            i++;
        }
    }

    cout << c << '\n';
    return 0;
}