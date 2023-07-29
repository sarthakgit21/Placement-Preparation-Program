    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return fun(preorder,i,INT_MAX);
    }
    
    TreeNode* fun(vector<int> & preorder,int &i,int bound)
    {
        if(i==preorder.size()||preorder[i]>bound)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[i++]);
        root->left=fun(preorder,i,root->val);
        root->right=fun(preorder,i,bound);
        return root;
        
        
    }
