class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int c=0;
        TreeNode* cur=root;
        int ans=0;
        while(cur)
        {
            if(cur->left){
                TreeNode* val=cur->left;
                while(val->right&&val->right!=cur) val=val->right;
                if(val->right==NULL)
                {
                    val->right=cur;
                    cur=cur->left;
                }
                else{
                    c++;
                    if(c==k) ans=cur->val;
                    val->right=NULL;
                    cur=cur->right;
                }
                
            }
            else
            {
                c++;
                if(c==k) ans= cur->val;
                cur=cur->right;
            }
        }
        return ans;
    }
};
