
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.

    int ans=-1;
    BinaryTreeNode<int> *cur=node;
    while(cur)
    {
        if(cur->data<x){
            cur=cur->right;
        }
        else{
            ans=cur->data;
            cur=cur->left;
        }
    }
    return ans;


}
