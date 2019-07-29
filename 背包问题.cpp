class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A: Given n items with size A[i]
     * @param V: Given n items with value V[i]
     * @return: The maximum value
     */
    int backPackII(int m, vector<int> &A, vector<int> &V) {
        if(A.empty()){
            return 0;
        }
        
        int n = A.size();
        
        // 初始状态
        vector<vector<int>> vv(n + 1, vector<int>(m + 1, 0));
        
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                // 装不下
                if(j < A[i - 1]){
                    // 状态转移方程
                    vv[i][j] = vv[i - 1][j];
                }
                // 装得下
                else{
                    // 状态转移方程
                    // vv[i - 1][j]不拿
                    // vv[i - 1][j - A[i - 1]拿
                    vv[i][j] = max(vv[i - 1][j], vv[i - 1][j - A[i - 1]] + V[i - 1]);
                }
            }
        }
        
        return vv[n][m];
    }
};
