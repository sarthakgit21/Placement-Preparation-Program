
    void flatten(TreeNode* root) {
       TreeNode* cur=root;
        while(cur)
        {
            if(cur->left){
                TreeNode* x=cur->left;
                while(x->right)
                {
                    x=x->right;
                }
                x->right=cur->right;
                cur->right=cur->left;
                cur->left=NULL;
            }
            cur=cur->right;
        }
    }
};
