#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    int x, n;
    cin >> x >> n;
    
    set<int> positions;         
    multiset<int> lengths;      

    positions.insert(0);
    positions.insert(x);
    lengths.insert(x);

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;

        auto it = positions.upper_bound(p);
        int right = *it;
        int left = *prev(it);

        lengths.erase(lengths.find(right - left));

        lengths.insert(p - left);
        lengths.insert(right - p);

        positions.insert(p);

        cout << *lengths.rbegin() << " ";
    }
    cout << endl;
    return 0;
}