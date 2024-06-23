class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        const int n = int(grid.size());
        const int m = int(grid[0].size());
        
        int min_x = m, min_y = n;
        int max_x = 0, max_y = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j]) {
                    min_x = min(min_x, i);
                    min_y = min(min_y, j);
                    max_x = max(max_x, i);
                    max_y = max(max_y, j);
                }
            }
        }
        return (max_x - min_x + 1) * (max_y - min_y + 1);
    }
};
