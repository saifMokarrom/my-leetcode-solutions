class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> rows(m), columns(n);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j <n; ++j) {
                if (grid[i][j] == 1) {
                    ++rows[i], ++columns[j];
                }
            }
        }

        int calc = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j <n; ++j) {
                if (grid[i][j] == 1 && (rows[i]>1 || columns[j]>1)) {
                    calc++;
                }
            }
        }
        return calc;

    }
};
