// 通过当前位置，找到其周围上下左右四个位置
static int nextPos[4][2] = {
    {0, -1}, {0, 1}, {-1, 0}, {1, 0}
};

class Solution {
public:
    void DFS(vector<vector<char>>& board, int x, int y, int row, int col){
        // 将与周围连通的'o'，即没有被'x'包围的'o'标记为'#'
        board[x][y] = '#';
        
        // 保存下一个位置
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
            
            // 是'o'，递归
            if(board[nextX][nextY] == 'O'){
                DFS(board, nextX, nextY, row, col);
            }
        }
    }
    
    void solve(vector<vector<char>>& board) {
        if(board.empty()){
            return;
        }
        
        // 获取二维矩阵的行列
        int row = board.size();
        int col = board[0].size();
        
        // 将第一行和最后一行为'o'的作为入口
        for(int i = 0; i < col; ++i){
            if(board[0][i] == 'O'){
                DFS(board, 0, i, row, col);
            }
            
            if(board[row - 1][i] == 'O'){
                DFS(board, row - 1, i, row, col);
            }
        }
        
        // 将第一列和最后一列为'o'的作为入口
        for(int i = 0; i < row; ++i){
            if(board[i][0] == 'O'){
                DFS(board, i, 0, row, col);
            }
            
            if(board[i][col - 1] == 'O'){
                DFS(board, i, col - 1, row, col);
            }
        }
        
        // 将所有的'o'变为'x'，将所有的'#'变为'o'
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                
                if(board[i][j] == '#'){
                    board[i][j] = 'O';
                }
            }
        }
    }
};