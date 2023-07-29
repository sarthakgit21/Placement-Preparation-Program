class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return false;
        return validateBST(root,LONG_MIN,LONG_MAX);
        
    }
    
    
    bool validateBST(TreeNode* root,long low,long high)
    {
        if(!root) return true;
        if(root->val<=low) return false;
        if(root->val>=high) return false;
        
        return validateBST(root->left,low,root->val)&&validateBST(root->right,root->val,high);
        
    }
    
};
