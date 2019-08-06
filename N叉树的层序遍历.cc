/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        // 二维数组保存层序遍历结果，每一层占一行
        vector<vector<int>> vv;
        
        if(root == nullptr){
            return vv;
        }
        
        // 队列
        queue<Node*> q;
        
        // 头结点入队
        q.push(root);
        
        while(!q.empty()){
            // 得到当前队伍中的数量，即该层结点数
            int qsz = q.size();
            
            // 保存一层的数据
            vector<int> level;
            
            // 取出该层结点，放入二维数组对应的行
            while(qsz--){
                // 拿到头结点
                Node* cur = q.front();
            
                // 头结点出队
                q.pop();
                
                for(const auto& e : cur->children){
                    q.push(e);
                }
                
                // 层序遍历结果放入该层
                level.push_back(cur->val);
            }
            // 将该层放入二维数组
            vv.push_back(level);
        }
        
        return vv;
    }
};