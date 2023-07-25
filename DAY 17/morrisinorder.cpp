class Solution {
    public:
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> inorder;
        TreeNode* cur=root;
        
        while(cur)
        {
            
            if(cur->left==NULL)
            {
                inorder.push_back(cur->val);
                cur=cur->right;
            }
            else
            {
                TreeNode* temp=cur->left;
                while(temp->right&&temp->right!=cur)
                {
                    temp=temp->right;
                }
                
                if(temp->right==NULL)
                {
                    temp->right=cur;
                    cur=cur->left;
                }
                else
                {
                    inorder.push_back(cur->val);
                    temp->right=NULL;
                    cur=cur->right;
                }
            }
            
        }    
        return inorder;
        
    }
};
