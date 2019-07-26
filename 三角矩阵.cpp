class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if(triangle.empty()){
            return 0;
        }
        
        int row = triangle.size();
        int col = triangle[row - 1].size();
        
        // 初始状态vv[0][0] = triangle[0][0]
        vector<vector<int>> vv(triangle);
        
        for(int i = 1; i < row; ++i){
            // 状态转移方程
            vv[i][0] = vv[i - 1][0] + triangle[i][0];
            vv[i][i] = vv[i - 1][i - 1] + triangle[i][i];
        }
        
        for(int i = 1; i < row; ++i){
            for(int j = 1; j < i; ++j){
                // 状态转移方程
                vv[i][j] = min(vv[i - 1][j], vv[i - 1][j - 1]) + triangle[i][j];
            }
        }
        
        int min_routine = vv[row - 1][0];
        for(int j = 1; j < col; ++j){
            // 取得最后一行的最小值
            min_routine = min(min_routine, vv[row - 1][j]);
        }
        
        return min_routine;
    }
};
