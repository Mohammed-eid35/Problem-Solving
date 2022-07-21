class Solution {
private:
    vector<int> nodeType;
    int numberOfNodes;
    
    void init(int n) {
        numberOfNodes = n;
        nodeType = vector<int>(n);
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        init(graph.size());
        vector<int> result;
        for (int i = 0; i < numberOfNodes; ++i) {
            if (safeNode(i, graph))
                result.push_back(i);
        }
        return result;
    }
    
    bool safeNode(int node, vector<vector<int>> &graph) {
        if (nodeType[node]) 
            return nodeType[node] == 2;
        
        nodeType[node] = 1;
        for (int child : graph[node]) {
            if (nodeType[child] == 2)
                continue;
            
            if (nodeType[child] == 1 || !safeNode(child, graph))
                return false;
        }
        
        return nodeType[node] = 2;
    }
};