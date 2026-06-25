class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         long long wholeDigit = 0;
         for(int i=0; i<digits.size(); i++){
            wholeDigit = wholeDigit * 10 + digits[i];
         }
         
         wholeDigit = wholeDigit + 1;
        
         vector<int>ans;
         while(wholeDigit){
            int digit = wholeDigit%10;
            ans.push_back(digit);
            wholeDigit = wholeDigit/10;
         }
          reverse(ans.begin(), ans.end());
         return ans;
    }
};
