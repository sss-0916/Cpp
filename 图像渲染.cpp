// 根据当前位置，寻找下一个位置
static int nextPos[4][2] = {
    {0, -1}, {0, 1}, {-1, 0}, {1, 0}
};

class Solution {
public:
    void DFS(vector<vector<int>>& image, vector<vector<int>>& book, int x, int y, 
             int row, int col, int newColor, int oldColor){
        // 将该块染色
        image[x][y] = newColor;
        
        // 标记置为1，已经染过色
        book[x][y] = 1;
        
        // 保存下一个位置
        int nextX = 0;
        int nextY = 0;
        
        // 遍历上下左右四个位置
        // 同样的，不需要写结束条件，for循环结束就结束了
        for(int i = 0; i < 4; ++i){
            nextX = x + nextPos[i][0];
            nextY = y + nextPos[i][1];
            
            // 越界
            if(nextX >= row || nextX < 0 || nextY >= col || nextY < 0){
                continue;
            }
            
            // 颜色和原来的颜色相同并且没有被染过色
            if(image[nextX][nextY] == oldColor && book[nextX][nextY] == 0){
                // 递归每一个块
                DFS(image, book, nextX, nextY, row, col, newColor, oldColor);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) { 
        // 获取图像的行列
        int row = image.size();
        int col = image[0].size();
        
        // 标记某一个像素是否被染过色，0表示没有被染过色，1表示已经染过
        vector<vector<int>> book(row, vector<int>(col, 0));
        
        // 旧颜色
        int oldColor = image[sr][sc];
        
        DFS(image, book, sr, sc, row, col, newColor, oldColor);
        
        return image;
    }
};
