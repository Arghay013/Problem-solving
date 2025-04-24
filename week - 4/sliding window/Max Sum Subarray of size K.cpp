class Solution {
    public:
      int maximumSumSubarray(vector<int>& v, int k) {
          // code here
          int n = v.size();
          int l=0,r=0;
          long long sum=0, ans=0;
          while(r<n){
              sum += v[r];
              if(r-l +1 == k){
                  ans = max(ans, sum);
                  sum -= v[l];
                  l++; r++;
              }else 
              {
                  r++;
              }
          }
          return ans;
      }
  };