class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        // 创建一个unordered_set保存字典
        unordered_set<string> dict(wordList.begin(), wordList.end());
        
        // 创建一个unordered_set保存已经使用过的字符串
        unordered_set<string> visited;
        visited.insert(beginWord);
        
        // 保存转换次数
        int step = 1;
        
        queue<string> q;
        q.push(beginWord);
        
        while(!q.empty()){
            // 一次转换后所有的可能性
            int qsz = q.size();
            
            while(qsz--){
                string cur = q.front();
                q.pop();
                
                for(size_t i = 0; i < cur.size(); ++i){
                    for(char ch = 'a'; ch <= 'z'; ++ch){
                        string temp = cur;
                        
                        // 将单词的第i个字符修改为ch
                        temp[i] = ch;
                        
                        // 转换得到的单词不在字典中或者已经被使用过
                        if(dict.find(temp) == dict.end() || visited.find(temp) != visited.end()){
                            continue;
                        }
                        
                        // 转换后的单词和结果相同，转换成功
                        if(temp == endWord){
                            return step + 1;
                        }
                        
                        // 将其放入队列
                        q.push(temp);
                        
                        // 标记为已访问
                        visited.insert(temp);
                    }
                }
            }
            
            ++step;
        }
        
        return 0;
    }
};