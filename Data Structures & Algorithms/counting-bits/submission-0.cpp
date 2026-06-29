class Solution {
public:
    int countbits(int n){
        if(n==0) return 0;
        int count=0;
        while(n>0){
         if((n&1)==1){
            count++;
         }
            n = n >> 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
          for(int i=0; i<=n; i++){
              int numbers = countbits(i);
              ans[i] = numbers;
          }

          return ans;
    }
};
