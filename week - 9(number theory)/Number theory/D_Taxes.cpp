#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool isPrime(int n) {
   if (n == 1) {
      return false;
   }

   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}
int main() {
    optimize();
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << 1 << '\n';
        return 0;
    }
    int x = n;
    x-=2;
    if(isPrime(x)){
        cout << 2 << '\n';
        return 0;
    }
    if(n==4 || n==5){
        cout << 2 << '\n';
    }
    else if(n%2 == 0){
        cout << 2 << '\n';
    }else{
        cout << 3 << '\n';
    }
    return 0;
}