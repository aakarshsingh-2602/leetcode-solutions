class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                bool isDiagonal = (i == j || i + j == n - 1);
                
                if (isDiagonal) {
                    // Diagonals must be non-zero
                    if (grid[i][j] == 0) return false;
                } else {
                    // All other elements must be zero
                    if (grid[i][j] != 0) return false;
                }
            }
        }
        
        return true;
    }
};