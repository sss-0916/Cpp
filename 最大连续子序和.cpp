class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        if(array.empty()){
            return -1;
        }
        
        // 保存所有状态的结果
        vector<int> v(array.size(), 0);
        
        // 初始状态
        v[0] = array[0];
        
        // 保存所有状态中的最大值
        int max_sum = v[0];
        
        for(int i = 1; i < v.size(); ++i){
            // 状态转移方程
            v[i] = max(v[i - 1] + array[i], array[i]);
            
            // 确保max_sum中保存的是状态中的最大值
            max_sum = max(max_sum, v[i]);
        }
        
        return max_sum;
    }
};
