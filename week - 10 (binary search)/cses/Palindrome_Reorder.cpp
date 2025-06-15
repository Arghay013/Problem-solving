#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    optimize();
    string s;
    cin >> s;
    char ans[s.size()];
    int freq[26] = {};
    for(int i=0; i<s.size(); i++){
        freq[s[i] - 'A'] += 1;
    }
    int cnt = 0;
    for(auto u : freq){
        if(u % 2 == 1){
            cnt++;
        }
    }
    if(cnt > 1){
        cout << "NO SOLUTION\n";
    }else{
        int l=0,r=s.size()-1;
        for(int i=0; i<s.size(); i++){
            if(freq[s[i] - 'A'] == 0){
                continue;
            }
            if(freq[s[i] - 'A'] %2 == 1){
                ans[s.size()/2] = s[i];
                freq[s[i] - 'A'] -= 1;
            }
            while(freq[s[i] - 'A'] > 0){
                ans[l++] = s[i];
                ans[r--] = s[i];
                freq[s[i] - 'A'] -= 2;
            }
        }
        string res(ans, ans+s.size());
        cout << res << '\n';
    }
    return 0;
}