#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,ans,temp;
    string s;
	cin>>t;
	while(t--){
		cin>>n>>s;
		priority_queue<int>q;
		ans=0;
		for(int i=0;i<n;i++){
			if(s[i]=='L')temp=i;
			else temp=n-i-1;
			ans+=temp;
			if(n-1-temp>temp)q.push(n-1-temp*2);
		}
		for(int i=1;i<=n;i++){
			if(!q.empty()){
				ans+=q.top();
				q.pop();
			}
			cout<<ans<<' ';
		}
		cout<<endl;
	}
}