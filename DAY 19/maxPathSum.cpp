class Solution {
public:
    
    int ans=INT_MIN;
    
    
    int fun(TreeNode*root){
        if(!root) return 0;
        
        int left=max(0,fun(root->left));
        int right=max(0,fun(root->right));
        ans=max(ans,right+left+root->val);
        
        return max(left,right)+root->val;
    }
    
    int maxPathSum(TreeNode* root) {
        fun(root);
        return ans;
    }
};
