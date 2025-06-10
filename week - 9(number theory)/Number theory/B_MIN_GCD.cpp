#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define yes   cout<<"Yes"<<endl
#define no   cout<<"No"<<endl
#define all(a) (a).begin(),(a).end()

#define mid(l,r) ((r+l)/2)
#define mx_int_prime 999999937

const double PI = acos(-1);

#define mem(a,b) memset(a, b, sizeof(a) )
#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) ((a)/__gcd(a,b))*b

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};


// ceil value x = (n+(m-1))/m

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    map<ll , ll> mp;
    for(int i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    ll mn = *min_element(a,a+n);
    if(mp[mn]>1){
        yes;
        return;
    }
    sort(a,a+n);
    if(mn == 1){
        ll g=0;
        for(int i=1; i<n; i++){
            g = GCD(g,a[i]);
        }
        if(g==1){
            yes;
            return;
        }
    }
    vector<ll> v;
    for(int i=1; i<n; i++){
        if(a[i]%a[0]==0)v.push_back(a[i]);
    }
    ll x=0;
    for(auto u:v){
        x = GCD(x,u);
    }
    if(x==a[0]){
        yes;return;
    }
    no;
}
int main() {
    optimize();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}