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
    TreeNode* fun(map<int,int> &mp,vector<int> &pre,int prest,int preend,vector<int>&in ,int inst,int inend)
    {
        if(prest>preend||inst>inend) return NULL;
        TreeNode* head=new  TreeNode(pre[prest]);
        int left=mp[pre[prest]];
        int numleft=left-inst;
        
        head->left=fun(mp,pre,prest+1,prest+numleft,in,inst,left);
        head->right=fun(mp,pre,prest+numleft+1,preend,in,left+1,inend);
        
        return head;
        
    }
    
    
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        
        int n=pre.size();
        
        int m=in.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++) mp[in[i]]=i;
        
        return fun(mp,pre,0,n-1,in,0,m-1);
        
    }
};
