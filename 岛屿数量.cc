// 通过该位置寻找下一个位置
static int nextPos[4][2] = {
    {0, -1}, {0, 1}, {-1, 0}, {1, 0}
};

class Solution {
public:
    void DFS(vector<vector<char>>& grid, int x, int y, int row, int col){
        // 将该位置修改为'#'，防止二次进入
        grid[x][y] = '#';
        
        // 保存下一位置
        int nextX = 0;
        int nextY = 0;
        
        // 遍历上下左右四个位置
        for(int i = 0; i < 4; ++i){
            nextX = x + nextPos[i][0];
            nextY = y + nextPos[i][1];
            
            // 越界
            if(nextX >= row || nextX < 0 || nextY >= col || nextY < 0){
                continue;
            }
            
            // 如果是陆地，递归
            if(grid[nextX][nextY] == '1'){
                DFS(grid, nextX, nextY, row, col);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // 为空，返回0
        if(grid.empty()){
            return 0;
        }
        
        // 获取网格的行列
        int row = grid.size();
        int col = grid[0].size();
        
        // 岛屿数量
        int num = 0;
        
        // 以每一个网格为起点
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j] == '1'){
                    ++num;
                    DFS(grid, i, j, row, col);
                }
            }
        }
        
        return num;
    }
};