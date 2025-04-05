#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    
    ll l = 0, r = n-1;
    ll s = 0, d = 0;
    ll c = 1;
    
    while(l <= r){
    	if(c == 1){
    		if(a[l] >= a[r]){
    			s += a[l];
    			l++;
    		}
    		else{
    			s += a[r];
    			r--;
    		}
    		c = 2;
    	}
    	else{
    		if(a[l] >= a[r]){
    			d += a[l];
    			l++;
    		}
    		else{
    			d += a[r];
    			r--;
    		}
    		c = 1;
    	}
    }      
    cout << s << " " << d << endl;
}