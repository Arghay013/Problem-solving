#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
    	cin >> v[i];
    }
    sort(v.begin(),v.end());
    long s = 0;
    for(int i = 0; i < n-1; i++)
    	s+=v[i];
    if(s<=v.back())
    	cout << 2*v.back();
    else
    	cout << accumulate(v.begin(), v.end(),0LL);
}