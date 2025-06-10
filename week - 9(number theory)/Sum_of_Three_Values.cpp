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
    ll n,sum;
    cin >> n >> sum;
    ll a[n+1];
    vector<pair<ll, ll>> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].F;
        v[i].S = i+1;
    }
    sort(all(v));
    ll first=-1, second=-1, third=-1;
    for(int i=0; i<n; i++){
        ll l=i+1, r=n-1;
        ll need = sum - v[i].F;
        while(l<r){
            if(need > (v[l].F + v[r].F)){
                l++;
            }else if(need < (v[l].F + v[r].F)){
                r--;
            }else{
                cout << v[i].S <<' ' << v[l].S <<  ' ' << v[r].S;
                return;
            }

        }
    }
    cout << "IMPOSSIBLE";
}
int main() {
    optimize();
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}