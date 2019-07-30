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
        vector<int> vv(m + 1, 0);
        
        for(int i = 1; i <= n; ++i){
            // 注意从后向前更新，当前行会用到上一行前面的状态
            for(int j = m; j >= 1; --j){
                // 装得下
                if(j >= A[i - 1]){
                    // 状态转移方程
                    // vv[j]不拿
                    // vv[j - A[i - 1]拿
                    vv[j] = max(vv[j], vv[j - A[i - 1]] + V[i - 1]);
                }
            }
        }
        
        return vv[m];
    }
};