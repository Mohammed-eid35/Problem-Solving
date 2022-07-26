/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return root;
        queue<Node*> nodes;
        nodes.push(root);
        while (!nodes.empty()) {
            int levelSize = nodes.size();
            while (levelSize--) {
                Node* currentNode = nodes.front();
                nodes.pop();
                if (currentNode->left) nodes.push(currentNode->left);
                if (currentNode->right) nodes.push(currentNode->right);
                if (levelSize) currentNode->next = nodes.front();
            }
        }
        return root;
    }
};