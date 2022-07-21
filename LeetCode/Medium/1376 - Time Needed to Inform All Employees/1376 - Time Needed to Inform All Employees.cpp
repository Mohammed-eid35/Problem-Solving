class Solution {
private:
    vector<int> currentTime;
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        currentTime = vector<int>(n, -1);
        currentTime[headID] = informTime[headID];
        for (int i = 0; i < n; ++i) {
            if (currentTime[i] == -1) {
                currentTime[i] = calculateTime(i, manager, informTime);
            }
        }
        int timeNeeded = 0;
        for (auto time : currentTime) {
            timeNeeded = max(timeNeeded, time);
        }
        return timeNeeded;
    }
    
    int calculateTime(int employee, vector<int> &manager, vector<int> &informTime) {
        if (currentTime[employee] != -1) return currentTime[employee];
        
        return currentTime[employee] = calculateTime(manager[employee], manager, informTime) + informTime[employee];
    }
};