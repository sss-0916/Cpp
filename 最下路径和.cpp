class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        // 初始状态F(0, 0) = grid[0][0]
        vector<vector<int>> vv(grid);
        
        for(int i = 1; i < row; ++i){
            // 状态转移方程
            vv[i][0] = vv[i - 1][0] + grid[i][0];
        }
        
        for(int j = 1; j < col; ++j){
            // 状态转移方程
            vv[0][j] = vv[0][j - 1] + grid[0][j];
        }
        
        for(int i = 1; i < row; ++i){
            for(int j = 1; j < col; ++j){
                // 状态转移方程
                vv[i][j] = min(vv[i - 1][j], vv[i][j - 1]) + grid[i][j];
            }
        }
        
        return vv[row - 1][col - 1];
    }
};
