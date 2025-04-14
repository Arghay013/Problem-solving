#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct cmp {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first)
            return a.first > b.first; 
        return a.second < b.second;  
    }
};
int main() {
    optimize();
    int n,pos=1;
    cin>>n;
    set<pair<int, int>> mono;
    multiset<pair<int, int>, cmp> poly;
    vector<int> ans;
    for(int i=1; i<=n; i++){
        int type;
        cin>>type;
        if(type==1){
            int money;
            cin>>money;
            mono.insert({ pos,money });
            poly.insert({ money, pos });
            pos++;
        }else if(type == 2){
            int p = mono.begin()->first,mon = mono.begin()->second;
            ans.push_back(p);
            mono.erase(mono.begin());
            poly.erase({ mon, p });
        }else if(type == 3){
            int p = poly.begin()->second,mon = poly.begin()->first;
            ans.push_back(p);
            mono.erase({p,mon});
            poly.erase(poly.begin());
        }
    }
    for(auto u:ans)cout<<u<<" ";
    cout<<'\n';
    
    return 0;
}
