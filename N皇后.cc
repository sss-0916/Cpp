class Solution {
public:
    bool isValid(vector<pair<int, int>>& solu, int row, int col){
        // 不在同一列、同一条斜线上
        // 在同一条'\'斜线上，y-x差相同
        // 在同一条'/'斜线上，x+y和相同
        for(const auto& pos : solu){
            if(pos.second == col || 
               pos.first + pos.second == row + col ||
               pos.first - pos.second == row - col){
                return false;
            }
        }
        return true;
    }
    
    void DFS(vector<vector<pair<int, int>>>& solutions, 
             vector<pair<int, int>>& solu, int curRow, int n){
        // 出口
        if(curRow == n){
            solutions.push_back(solu);
        }
        
        for(int i = 0; i < n; ++i){
            // 当前位置是否冲突
            if(isValid(solu, curRow, i)){
                // 不冲突，将其放入solu
                solu.push_back(make_pair(curRow, i));
                // 递归遍历
                DFS(solutions, solu, curRow + 1, n);
                // 回溯
                solu.pop_back();
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        // 保存所有可能的结果
        vector<vector<string>> result;
        // 所有放法
        vector<vector<pair<int, int>>> solutions;
        // 当前放法
        vector<pair<int, int>> solu;
        
        DFS(solutions, solu, 0, n);
        
        // 将所有的放法存到result中
        for(const auto& e : solutions){
            vector<string> temp(n, string(n, '.'));
            for(const auto& pos : e){
                temp[pos.first][pos.second] = 'Q';
            }
            
            result.push_back(temp);
        }
        
        return result;
    }
};