class Solution {
public:
    int newNum (int num){
        int newnum =0;
        while(num){
            int digit = num%10;
            int sqr = digit * digit;
            newnum += sqr;
            num = num /10;
        }

        return newnum;
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        while(n!=1 && st.find(n)==st.end()){
             st.insert(n);
              n = newNum(n);
        }
        if(n==1){
            return true;
        }else{
           return false;
        }
        
    }
};
