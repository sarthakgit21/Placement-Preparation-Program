/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    
    void fun(TreeNode* head)
    {
        if(!head)
        {
            return ;
        }
        
        fun(head->left);
        fun(head->right);
        ans.push_back(head->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
             fun(root);
        return ans;
    }
};
