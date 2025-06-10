#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int find_lower(vector<int>& v, int x) {
    int l = -1, r = v.size();
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (v[m] > x) r = m;
        else l = m;
    }
    return l;
}

int find_upper(vector<int>& v, int x) {
    int l = -1, r = v.size();
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (v[m] < x) l = m;
        else r = m;
    }
    return r;
}

int main() {
    optimize();
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto& x : v) {
        cin >> x;
    }

    sort(v.begin(), v.end());

    int k;
    cin >> k;

    int l, r;
    while (k--) {
        cin >> l >> r;
        auto itl = lower_bound(v.begin(),v.end(), l);
        auto itr = upper_bound(v.begin(),v.end(), r);
        cout << itr-itl << ' ';
    }
    cout << endl;

    return 0;
}