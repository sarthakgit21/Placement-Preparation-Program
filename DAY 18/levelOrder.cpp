class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
   vector<vector<int>> ans;
   queue<pair<TreeNode*,int>>q;
   // map<int,int> mp;
   if(!root) return ans;
   q.push({root,0});
   
   while(!q.empty())
   {
       int sz=q.size();
       vector<int> v;
       while(sz--){
           auto it=q.front();
           q.pop();
           TreeNode* node=it.first;
           int ind=it.second;
           cout<<node->val;
           v.push_back(node->val);
           if(node->left) q.push({node->left,ind-1});
           if(node->right) q.push({node->right,ind+1});
       }   
       ans.push_back(v);
   }
        return ans;
   
   
    }
};
