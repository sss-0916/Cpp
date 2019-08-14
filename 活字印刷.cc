class Solution {
public:
    void DFS(string& tiles, unordered_set<string>& result, 
             vector<int>& visited, string curStr){
        // 当前curStr不为空，保存起来
        if(!curStr.empty()){
            result.insert(curStr);
        }
        
        // 遍历
        for(int i = 0; i < tiles.size(); ++i){
            // 当前字符已经使用过
            if(visited[i]){
                continue;
            }
            
            // 已经被使用
            visited[i] = 1;
            
            DFS(tiles, result, visited, curStr + tiles[i]);
            
            // 回溯，尝试其他字符
            visited[i] = 0;
        }
    }
    
    int numTilePossibilities(string tiles) {
        // 如果字模为空
        if(tiles.empty()){
            return 0;
        }
        
        // 保存结果，可以自动去重
        unordered_set<string> result;
        // 标记是否已经被使用过
        vector<int> visited(tiles.size(), 0);
        
        DFS(tiles, result, visited, "");
        
        return result.size();
    }
};