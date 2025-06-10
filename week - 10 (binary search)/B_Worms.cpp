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

int main()
{
    optimize();
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)cin>>a[i];
    vector<pair<int,int>> v;
    v.PB({1,a[0]});
    for(int i=1; i<n; i++){
        v.PB( {v[i-1].S + 1 , v[i-1].S+a[i]} );
    }
//    for(int i=0; i<n; i++){
//        cout<<v[i].F<<" "<<v[i].S<<endl;
//    }
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        int l=0,r = n-1;
        int ans;
        while(l<=r){
            int mid = l + (r-l)/2;
//            dbg(ans);
            if(v[mid].F<=m && v[mid].S>=m){
                ans=mid;break;
            }
            if(m<v[mid].F)r=mid-1;
            else l=mid+1;
        }
        cout<<ans+1<<endl;
    }
 
    return 0;
}