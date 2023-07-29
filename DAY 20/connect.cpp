
class Solution {
public:
    vector<Node*> lvl;
    void dfs(Node* root, int level) {
        if (!root) return;

        if (lvl.size() == level) lvl.push_back(root);
        else {
            lvl[level]->next = root;
            lvl[level] = root;
        }

        dfs(root->left, level + 1);
        dfs(root->right, level + 1);

        return;
    }

    Node* connect(Node* root) {
        if (!root) return root;

        dfs(root, 0);
        return root;
    }
};
