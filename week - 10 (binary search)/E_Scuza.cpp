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
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
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
    ll n,k;
    cin >> n >> k;
    vector<ll> prf(n+1),ans(n+1);
    prf.PB(0);
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        prf.PB(prf.back()+x);
        if(i==0){
            ans.PB(x);
        }else
        ans.PB(max(ans.back(),x));
    }

    while(k--){
        ll y;
        cin >> y;
        ll ind = upper_bound(ans.begin(),ans.end(),y) - ans.begin();
        cout << prf[ind] << ' ';
    }
    cout << '\n';
}
int main() {
    optimize();
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}