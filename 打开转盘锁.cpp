class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        // 创建一个HashSet保存死亡数字
        unordered_set<string> deadNum(deadends.begin(), deadends.end());
        
        // 如果"0000"是死亡数字，无法解锁
        if(deadNum.find("0000") != deadNum.end()){
            return -1;
        }
        
        // 创建一个HashSet保存已经试过的密码
        unordered_set<string> book;
        book.insert("0000");
        
        // 保存转到次数
        int step = 0;
        
        queue<string> q;
        q.push("0000");
        
        while(!q.empty()){
            // 一次转换得到的所有可能
            int qsz = q.size();

            while(qsz--){
                string cur = q.front();
                q.pop();

                // 如果和目标相同，返回step，解密成功
                if(cur == target){
                    return step;
                }
                
                // 尝试所有可能的转法
                for(int i = 0; i < cur.size(); ++i){
                    string temp1 = cur;
                    string temp2 = cur;
                    
                    // 向上转
                    temp1[i] = temp1[i] == '0' ? '9' : temp1[i] - 1;
                    // 向下转
                    temp2[i] = temp2[i] == '9' ? '0' : temp2[i] + 1;
                    
                    // 如果temp1不是死亡数字并且没有尝试过
                    if(deadNum.find(temp1) == deadNum.end() && 
                      book.find(temp1) == book.end()){
                        q.push(temp1);
                        book.insert(temp1);
                    }
                    
                    // 如果temp2不是死亡数字并且没有尝试过
                    if(deadNum.find(temp2) == deadNum.end() &&
                      book.find(temp2) == book.end()){
                        q.push(temp2);
                        book.insert(temp2);
                    }
                }
            }
            
            ++step;
        }
        
        return -1;
    }
};