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
    // 深度优先遍历
    int DFS(unordered_map<int, Employee*> um, int id){
        int ret = um[id]->importance;
        
        for(const auto& e : um[id]->subordinates){
            // 递归调用，去遍历每一个下属
            ret += DFS(um, e);
        }
        
        return ret;
    }
    
    // 获取员工重要度
    int getImportance(vector<Employee*> employees, int id) {
        // 为空，返回0
        if(employees.empty()){
            return 0;
        }
        
        // HashMap
        unordered_map<int, Employee*> um; 
        
        // 将员工编号和员工信息放入一个HashMap中
        for(const auto& e : employees){
            um[e->id] = e;
        }
        
        return DFS(um, id);
    }
};