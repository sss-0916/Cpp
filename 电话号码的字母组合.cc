// 数字字母映射
static string digitMaps[] = {
    "", 
    "", "abc", "def", 
    "ghi", "jkl", "mno", 
    "pqrs", "tuv", "wxyz"
};

class Solution {
public:
    void DFS(string& digits, vector<string>& result, int index, string curStr){
        // 如果下标等于digits的长度，表示组合结束
        if(index == digits.size()){
            result.push_back(curStr);
            
            return;
        }
        
        // 获取下标
        int num = digits[index] - '0';
        
        // 获取当前数字对应的字母表
        string digitMap = digitMaps[num];
        
        // 遍历字母表中每一个字母
        for(const auto& e : digitMap){
            DFS(digits, result, index + 1, curStr + e);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        // 保存所有的组合
        vector<string> result;
        
        // 如果数字为空，直接返回result
        if(digits.empty()){
            return result;
        }
        
        DFS(digits, result, 0, "");
        
        return result;
    }
};