void fun(vector<int> &ans,Node*root,int level){
    if(!root) return ;
    if(level==ans.size()) ans.push_back(root->data);
    fun(ans,root->left,level+1);
    fun(ans,root->right,level+1);
    return;
}


vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   fun(ans,root,0);
   return ans;
}
