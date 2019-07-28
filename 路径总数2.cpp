class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        if(obstacleGrid[0][0] == 1){
            return 0;
        }
        
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        
        vector<vector<int>> vv(row, vector<int>(col, 0));
        // 初始状态
        for(int i = 0; i < row; ++i){
            if(obstacleGrid[i][0] == 0){
                vv[i][0] = 1;
            }
            else{
                break;
            }
        }
        
        // 初始状态
        for(int j = 0; j < col; ++j){
            if(obstacleGrid[0][j] == 0){
                vv[0][j] = 1;
            }
            else{
                break;
            }
        }
        
        for(int i = 1; i < row; ++i){
            for(int j = 1; j < col; ++j){
                if(obstacleGrid[i][j] == 0){
                    // 状态转移方程
                    vv[i][j] = vv[i - 1][j] + vv[i][j - 1];
                }
                else{
                    // 状态转移方程
                    vv[i][j] = 0;
                }
            }
        }
        
        return vv[row - 1][col - 1];
    }
};
