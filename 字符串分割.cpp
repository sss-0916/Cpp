class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        // 保存各个状态
        vector<bool> v(s.size() + 1, false);
        
        // 初始状态
        v[0] = true;
        
        for(int i = 1; i < v.size(); ++i){
            for(int j = 0; j < i; ++j){
                // 状态转移方程
                if(v[j] && dict.find(s.substr(j, i - j)) != dict.end()){
                    v[i] = true;
                    break;
                }
            }
        }
        
        return v[s.size()];
    }
};
