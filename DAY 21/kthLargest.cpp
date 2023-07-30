class Solution
{
    public:
    
    int n=0;
    
    void fun(Node* root)
    {
        if(!root) return ;
        fun(root->left);
        n++;
        fun(root->right);
    }
    
    int kthLargest(Node *root, int k)
    {
        //Your code here
        // int n=
        fun(root);
        // cout<<n;
        k=n-k+1;
        int c=0;
        Node* cur=root;
        int ans=0;
        while(cur)
        {
            if(cur->left){
                Node* val=cur->left;
                while(val->right&&val->right!=cur) val=val->right;
                if(val->right==NULL)
                {
                    val->right=cur;
                    cur=cur->left;
                }
                else{
                    c++;
                    if(c==k) ans=cur->data;
                    val->right=NULL;
                    cur=cur->right;
                }
                
            }
            else
            {
                c++;
                if(c==k) ans= cur->data;
                cur=cur->right;
            }
        }
        return ans;
    }
};
