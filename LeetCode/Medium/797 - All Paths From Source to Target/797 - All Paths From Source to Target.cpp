class Solution {
private:
    int n;
    vector<bool> stk;
    vector<vector<int>> paths;
    vector<int> path = {0};
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        stk = vector<bool>(n);
        DFS(graph, 0);
        return paths;
    }
    
    void DFS(vector<vector<int>> &graph, int u) {
        if (u == n - 1) {
            paths.push_back(path);
            return;
        }
        
        for (auto v : graph[u]) {
            if (stk[v]) continue;
            
            path.push_back(v);
            stk[v] = true;
            
            DFS(graph, v);
            
            path.pop_back();
            stk[v] = false;
        }
    }
};