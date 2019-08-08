// 当前位置获取下一个位置
static int nextPos[4][2] = {
    {0, -1}, {0, 1}, {-1, 0}, {1, 0}
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        // 获取网格的行列
        int row = grid.size();
        int col = grid[0].size();
        
        // 保存橘子位置的队列
        queue<pair<int, int>> q;
        
        // 腐烂时间
        int minute = 0;
        
        // 将腐烂的橘子放入队
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j] == 2){
                    q.push(make_pair(i, j));
                }
            }
        }
        
        while(!q.empty()){
            // 统计此时有多少个腐烂的橘子
            int qsz = q.size();
            
            // 是否有橘子腐烂
            bool flag = false;
            
            // 拿出第一批腐烂橘子，将受其影响而腐烂的橘子拉入队
            while(qsz--){
                // 队首腐烂橘子
                pair<int, int> cur = q.front();
                q.pop();
                
                // 将其影响的四个方向上下左右位置的腐烂橘子拉入队
                for(int i = 0; i < 4; ++i){
                    int nx = cur.first + nextPos[i][0];
                    int ny = cur.second + nextPos[i][1];
                    
                    // 越界
                    if(nx >= row || nx < 0 || ny >= col || ny < 0){
                        continue;
                    }
                    
                    // 如果是腐烂橘子周围的新鲜橘子，拉入队
                    if(grid[nx][ny] == 1){
                        grid[nx][ny] = 2;
                        q.push(make_pair(nx, ny));
                        flag = true;
                    }
                }
            }
            
            if (flag)
                ++minute;
        }
        
        // 不可能全部腐烂
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        
        return minute;
    }
};