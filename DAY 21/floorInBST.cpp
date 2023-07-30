
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans=X;
    TreeNode<int> *cur=root;
    while(cur)
    {
        if(cur->val>X)
        {
            cur=cur->left;
        }
        else
        {
            ans=cur->val;
            cur=cur->right;
        }

    }
    // cout<<ans;

    return ans;


}

