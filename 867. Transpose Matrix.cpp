class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int row = matrix[0].size(); //because new row will be col size and vice versa
        int col = matrix.size();

        vector<vector<int>> res(row, vector<int>(col,0));
        for (int i=0;i<col;i++){
            for (int j=0;j<row;j++){
                res[j][i] = matrix[i][j];
            }
        }

        return res;

    }
};
