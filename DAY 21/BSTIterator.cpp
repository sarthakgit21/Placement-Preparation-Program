class BSTIterator {
public:
    stack<TreeNode* >st;
    BSTIterator(TreeNode* root) {
        pushAll(root);
        
    }
    
    void pushAll(TreeNode*root){
        TreeNode*cur=root;
        while(root){
            st.push(root);
            root=root->left;
        }
    }
    
    int next() {
          auto it=st.top();
        st.pop();
        pushAll(it->right);
        return it->val;
    }
    
    bool hasNext() {

          return    !st.empty();
    }
};
