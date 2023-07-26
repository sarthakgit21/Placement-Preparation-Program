class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        int ans=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            int l=q.front().second;
            int r=q.back().second;
            ans=max(ans,r-l+1);
            
            while(sz--)
            {
                auto it =q.front();
                q.pop();
                if(it.first->left) q.push({it.first->left,(long long)2*(it.second)+1});
                if(it.first->right) q.push({it.first->right ,(long long)2*(it.second)+2});
            }
            
        }
        return ans;
        
        
    }
};
