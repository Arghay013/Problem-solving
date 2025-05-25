#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+5];
        for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        ll ans=1;
        for(ll i=0;i<=22;i++)
        {
            ll last=0,mx=0;
            for(ll j=1;j<=n;j++)
            {
                if(arr[j]&((ll)1<<i))
                {
                    mx=max(mx,j-last);
                    last=j;
                }
            }
            if(last)
            {
                mx=max(mx,(n-last+1));
            }
            ans=max(ans,mx);
        }
        cout<<ans<<endl;
    }
}