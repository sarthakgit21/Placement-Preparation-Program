void fun(vector<string>&ans,BinaryTreeNode < int > * root,string s)
{
    if(root->left==NULL&&root->right==NULL) {
        // cout<<s;
        s+=to_string(root->data);
        ans.push_back(s);
        s.pop_back();
        return;
    }

    s+=to_string(root->data)+" ";
    if(root->left)fun(ans,root->left,s);
    if(root->right)fun(ans,root->right,s);

}


vector < string > allRootToLeaf(BinaryTreeNode < int > * root) {
    // Write your code here.
    vector<string> ans;
    fun(ans,root,"");
    return ans;
}
