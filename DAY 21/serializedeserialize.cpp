/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void func(string &s,TreeNode* root){
        if(!root) {
            s+="#,";
            return;
        }
        s+=to_string(root->val)+',';
        func(s,root->left);
        func(s,root->right);
        
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans;
        func(ans,root);
        cout<<ans;
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i=0;
        return fun(data,i);
    }
    
    TreeNode*fun(string &data,int &idx)
    {
        if (idx >= data.size()-1) return NULL;
        TreeNode *node = nullptr;
        string s = "";
        while (data[idx]!=',') {
            s += data[idx];
            idx++;
        }
        if (s=="#") {
            return NULL;
        } else {
            node = new TreeNode();
            node->val = stoi(s);
        }

        node->left = fun(data, ++idx);
        node->right = fun(data, ++idx);
        return node;
        
    }
};
