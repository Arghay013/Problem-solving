#include<bits/stdc++.h>
using namespace std;
#define  optimize()  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  ll          long long int
void answer()
{
  ll n,m,k;
  ll a,b,c;
  cin>>a>>b>>c;
  ll ans=0;
  for(int i=0;i<61;i++){
    ll x=0,y=0,z=0;
    if(a&((ll)1<<i))x=1;
    if(b&((ll)1<<i))y=1;
    if(c&((ll)1<<i))z=1;
   // cout<<i<<endl;
   // cout<<x<<" "<<y<<" "<<z<<endl;
    if(x==1&&y==0&&z==0){
      cout<<-1<<endl;
      return;
    }
    if(x==0&&y==1&&z==1){
      cout<<-1<<endl;
      return;
    }
    if(z==0){
      if(x==1&&y==1)ans+=pow(2,i);
    }
    else if(z==1){
      if(x==0&&y==0)ans+=pow(2,i);
      else if(x==1&&y==0)ans+=pow(2,i);
    }
  } 
  cout<<ans<<endl; 
}

int main()
{
    optimize();
     int t=1;
     cin>>t;
    int tt=t;
     while(t--){
        answer();
     }
     return 0;
}
