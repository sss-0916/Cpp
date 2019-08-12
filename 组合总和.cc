class Solution {
public:
    void DFS(vector<int>& candiates, vector<vector<int>>& result, vector<int>& solu, 
            int prevPos, int curSum, int target){
        // 出口
        if(curSum >= target){
            if(curSum == target){
                result.push_back(solu);
            }
            
            return;
        }
        
        // 从上一个位置开始遍历
        for(int i = prevPos; i < candiates.size(); ++i){
            // 如果单个元素比目标值大，跳过
            if(candiates[i] > target){
                continue;
            }
            
            solu.push_back(candiates[i]);
            
            DFS(candiates, result, solu, i, curSum + candiates[i], target);
            
            // 回退
            solu.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // 保存结果
        vector<vector<int>> result;
        
        // 如果数组为空，返回空
        if(candidates.empty()){
            return result;
        }
        
        // 保存当前和
        int curSum = 0;
        
        // 保存当前解决方案
        vector<int> solu;
        
        DFS(candidates, result, solu, 0, curSum, target);
        
        return result;
    }
};