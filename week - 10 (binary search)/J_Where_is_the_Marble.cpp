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

void solve(int n, int q){
    // int n,q;
    // cin >> n >> q;
    // if(n==0 && q==0)return;
    int a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a,a+n);
    while (q--)
    {
        int x;
        cin >> x;
        int ind = lower_bound(a,a+n,x) - a;
        int val = *lower_bound(a,a+n,x);
        if(val == x){
            cout <<x <<" found at " << ind+1 << '\n';
        }else{
            cout << x << " not found\n";
        }
    }
    
}
int main() {
    optimize();
    int t=1;
    while(1){
        int n,q;
        cin >> n >> q;
        // cout << n << q;
        if(n==0 && q==0)break;
        cout << "CASE# " << t << ": \n";
        t++;
        solve(n,q);
    }
    return 0;
}