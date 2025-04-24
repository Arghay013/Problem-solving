class Solution {
    public:
      int search(string &pat, string &txt) {
          // code here
          int k = pat.size();
          int n = txt.size();
          vector<int> p(26,0), t(26,0);
          for(auto c : pat){
              p[c - 'a']++;
          }
          
          int j=0,cnt=0;
          for(int i=0; i<n; i++){
              t[txt[i] - 'a']++;
              if(i-j+1 > k){
                  t[txt[j] -'a']--;
                  j++;
              }
              if(p == t)cnt++;
          }
          return cnt;
      }
  };