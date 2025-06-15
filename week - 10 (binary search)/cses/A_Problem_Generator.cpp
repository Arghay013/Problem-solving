#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,ll>mp;
        for(ll i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        ll ans=0;
        for(char i='A';i<='G';i++)
        {
            if(mp[i]<m)
            {
                ans+=(m-mp[i]);
            }
        }
        cout<<ans<<endl;
    }
}
