class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        
        vector<vector<int>> dp(n,vector<int> (m,0));
        vector<int> prev(m,0);
        
        prev[0]=grid[0][0];
        
        for(int i=1;i<m;i++) {
            prev[i]=prev[i-1]+grid[0][i];
        }
        

        
        for(int i=1;i<n;i++)
        {
            prev[0]+=grid[i][0];
            for(int j=1;j<m;j++)
            {
                prev[j]=min(prev[j],prev[j-1])+grid[i][j];
                // cout<<cur[j];
            }

        }
        
        return prev[m-1];
        
        
    }
};
