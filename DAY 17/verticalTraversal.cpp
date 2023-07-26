class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       vector<vector<int>> ans;
       queue<pair<TreeNode*,pair<int,int>>>q;
       map<int,map<int,vector<int>>> mp;

       q.push({root,{0,0}});

       while(!q.empty())
       {
           auto it=q.front();
           q.pop();
           TreeNode* node=it.first;
           int x=it.second.first;
           int y=it.second.second;
           
           mp[x][y].push_back(node->val);
           
           if(node->left) q.push({node->left,{x-1,y+1}});
           if(node->right) q.push({node->right,{x+1,y+1}});
           
       }

       for(auto &it:mp)
       {
           vector<int> v;
           for(auto x:it.second)
           {
               vector<int> cc;
               cc=x.second;
               sort(cc.begin(),cc.end());
               for(auto x:cc) v.push_back(x); 
           }
           ans.push_back(v);
       }
       return ans;

    }
};
