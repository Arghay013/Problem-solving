#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;cin>>a>>b;
    int d = abs(a-b);
    if(d>=2){
        cout<<max(a,b)*2-1<<endl;
    }else if(d==1){
        cout<<a+b<<endl;
    }else if(a==b){
        cout<<a+b<<endl;
    }
    return 0;
}