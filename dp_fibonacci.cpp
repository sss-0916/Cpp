class Solution {
public:
    int Fibonacci(int n) {
        vector<int> fib(n + 1, 0);
        
        // 初始状态
        fib[1] = 1;
        fib[2] = 1;
        
        for(int i = 3; i <= n; ++i){
            // 状态转移方程
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        
        return fib[n];
    }
};
