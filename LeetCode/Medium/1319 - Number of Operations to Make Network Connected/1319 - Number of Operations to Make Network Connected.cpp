class Solution {
private:
    vector<vector<int>> graph;
    vector<bool> visited;
    int extractedCables = 0;
    int numberOfNodes = 0;
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        numberOfNodes = n;
        buildGraph(connections);
        visited = vector<bool>(n);
        int componentCounter = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                DFS(-1, i);
                componentCounter++;
            }
        }
        extractedCables >>= 1;
        componentCounter--;
        return (componentCounter <= extractedCables ? componentCounter : -1);
    }
    
    void buildGraph(vector<vector<int>> &connections) {
        graph = vector<vector<int>> (numberOfNodes);
        for (auto connection : connections) {
            graph[connection[0]].push_back(connection[1]);
            graph[connection[1]].push_back(connection[0]);
        }
    }
    
    void DFS(int parent, int node) {
        if (visited[node]) {
            extractedCables++;
            return;
        }
        visited[node] = true;
        for (auto child : graph[node]) {
            if (child != parent)
                DFS(node, child);
        }
    }
};