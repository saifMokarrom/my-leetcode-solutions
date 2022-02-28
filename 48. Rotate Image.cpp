class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i=0;i<matrix.size();i++){
            for (int j=i; j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);

            }

        }

        for (int i=0;i<matrix.size();i++){
            int j=matrix[0].size()-1;
            int k=0;

            while(j>k){
                swap(matrix[i][k],matrix[i][j]);
                j--;
                k++;
            }
        }
    }
};
