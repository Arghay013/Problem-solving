class Solution {
    public:
      vector<int> firstNegInt(vector<int>& v, int k) {
          int n = v.size();
          int l=0,r=0;
          queue<int> q;
          vector<int> ans;
          while(r<n){
              if(v[r] < 0){
                  q.push(v[r]);
              }
              if(r-l+1 == k){
                  if(!q.empty()){
                      ans.push_back(q.front());
                      if(v[l] == q.front()){
                          q.pop();
                      }
                  }
                  else ans.push_back(0);
                  // if(v[l] == q.front()){
                  //     q.pop();
                  // }
                  l++;
              }
              r++;
          }
          return ans;
          
      }
  };