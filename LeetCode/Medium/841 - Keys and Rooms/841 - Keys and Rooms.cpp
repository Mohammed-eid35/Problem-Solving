class Solution {
private:
    int n;
    vector<bool> vis;
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        n = rooms.size();
        vis = vector<bool>(n);
        
        solve(rooms, 0);
        
        for (auto room : vis) {
            if (!room) return false;
        }
        return true;
    }
    
    void solve(vector<vector<int>> &rooms, int room) {
        if (vis[room]) return;
        vis[room] = true;
        
        for (auto key : rooms[room]) solve(rooms, key);
    }
};