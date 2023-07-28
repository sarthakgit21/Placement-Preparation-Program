class Solution {
public:
    bool fun(TreeNode*left,TreeNode*right){
        if(left==NULL||right==NULL) return right==left;
        if(left->val!=right->val) return 0;
        return fun(left->left,right->right)&&fun(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;
        return fun(root->left,root->right);
    }
};
