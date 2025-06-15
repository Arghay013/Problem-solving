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
    ll n; cin>>n;
    string s; cin>>s;
    ll ans=0,i;
    if(n<3){
        cout<<0<<endl; return;
    }
    for(i=0; i<n-2; i++){
       if(s[i]=='m' and s[i+1]=='a' and s[i+2]=='p'){
          ans++; i+=2;
       }
       else if(s[i]=='p' and s[i+1]=='i' and s[i+2]=='e'){
          ans++; i+=2;
       }
 
       
    }
    
    cout<<ans<<endl;
}
int main() {
    optimize();
    int t;cin >> t;
    
    for(ll cs = 1; cs <= t; cs++){
     // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}