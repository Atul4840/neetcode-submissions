class Solution {
public:
    int expandandcount(string &s , int left, int right){
        int count =0;
        while(left >=0 and right<s.size() and s[left]==s[right]){
            count++;
            left--;
            right++;

        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount =0;
        for(int i=0; i<s.size(); i++){
            //odd
            totalcount += expandandcount(s,i,i);
            //even
            totalcount += expandandcount(s,i,i+1);
        }
        return totalcount;
    }
};
