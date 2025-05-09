#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define all(v) v.rbegin(),v.rend()
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      if(s.size()==2&&s[0]=='('&&s[1]==')')cout<<"NO"<<endl;
      else{
            cout<<"YES"<<endl;
        bool a=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                a=1;
                break;
        }
        }

       if(a){
        for(int i=0;i<n;i++)cout<<"()";
      }
      else{
        for(int i=0;i<n;i++)cout<<'(';
        for(int i=0;i<n;i++)cout<<')';
      }

      cout<<endl;
      }
    }
 return 0;
}
