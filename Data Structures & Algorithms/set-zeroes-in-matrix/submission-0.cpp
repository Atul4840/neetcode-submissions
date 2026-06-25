class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> rowToZero(rows, 0);
        vector<int> colToZero(cols, 0);
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j]==0){
                    rowToZero[i] = 1;
                    colToZero[j] = 1;
                }
            }
        }

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(rowToZero[i] || colToZero[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
