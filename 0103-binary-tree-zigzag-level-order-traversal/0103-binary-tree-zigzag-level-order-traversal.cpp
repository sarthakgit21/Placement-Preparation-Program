/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(!root) return ans;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        int flag=1;
        
        while(!q.empty()){
            int sz=q.size();
            
            vector<int> levels(sz);

            for(int i=0;i<sz;i++){
                
                auto it=q.front();
                int ind=flag==1?0+i:sz-i-1;
                q.pop();
                levels[ind]=it->val;
                if(it->left) q.push(it->left);
                if(it->right) q.push(it->right);
                
            }
            ans.push_back(levels);
            // cout<<flag;
            flag=!flag;
            
        }
        
        return ans;
    }
};