#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int n;
    cin >> n;
    int a[n],cnt=0;
    multiset<int> ms;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++){
        auto it=ms.upper_bound(a[i]); 
        if(ms.upper_bound(a[i]) == ms.end()){
            ms.insert(a[i]);cnt++;
        }
        else{
            ms.erase(it);
            ms.insert(a[i]);
        }
    }
    cout << cnt << '\n';
    return 0;
}