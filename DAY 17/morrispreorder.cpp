class Solution {
    public:
    
    vector<int> preorderTraversal(TreeNode* root) 
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
                    inorder.push_back(cur->val);
                    cur=cur->left;
                }
                else
                {
                    temp->right=NULL;
                    cur=cur->right;
                }
            }
            
        }    
        return inorder;
        
    }
};
