/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int DFS(unordered_map<int, Employee*>& um, int id){
        // 加上当前员工的重要度
        int imp = um[id]->importance;
        
        // 递归遍历其所有下属，尝试当下的每一种可能
        // 这里无需判断边界，for循环就是边界，下属为空，直接结束
        for(const auto& e : um[id]->subordinates){
            imp += DFS(um, e);
        }
        
        return imp;
    }
    
    int getImportance(vector<Employee*> employees, int id) {
        // 创建一个HashMap保存员工id和信息
        unordered_map<int, Employee*> um;
        
        // 将员工的id及其信息存到一个HashMap中
        for(const auto& e : employees){
            um[e->id] = e;
        }
        
        return DFS(um, id);
    }
};
