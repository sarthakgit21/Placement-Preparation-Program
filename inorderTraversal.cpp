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
        ans.push_back(head->val);
        fun(head->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        fun(root);
        return ans;
    }
};
