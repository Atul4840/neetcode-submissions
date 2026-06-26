class Solution {
public:
    double solve(double x, int n){
        long long num = n;
        if(num==0){
            return 1;
        }
        if(num<0){
          x = 1/x;
          num = -num;
        }
        if(num%2==0){
            double half = solve(x,num/2);
            return half * half;
        }else{
            double half = solve(x,num/2);
            return x* half * half;
        }
    }
    double myPow(double x, int n) {
        double ans = solve(x,n);
        return ans;
    }
};
