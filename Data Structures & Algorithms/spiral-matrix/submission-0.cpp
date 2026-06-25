class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        // add four variables
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

       while (left <= right && top <= bottom) {
        // step 1 left to right
        for(int i=top; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        // step 2 top to bottom
        for(int i=top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        // step 3 right to left
        if(top<=bottom){
        for(int i=right; i>=left; i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        // step 4 bottom to top
        if(left<=right){
        for(int i=bottom; i>=top; i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
        }
       }
        return ans;
    }
};
