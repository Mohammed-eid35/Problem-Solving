class Solution {
public:
    string interpret(string command) {
        string ret = "";
        int n = command.size();
        for (int i = 0; i < n; ++i) {
            if (command[i] == '(') continue;

            if (command[i] == ')') {
                if (command[i - 1] == '(') ret += 'o';
            }
            else {
                ret += command[i];
            }
        }
        return ret;
    }
};