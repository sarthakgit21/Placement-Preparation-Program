class Solution {
public:
    
    void dfs(vector<vector<char>>& grid,int i,int j){
        
        if(i<0||j<0||j>=grid[0].size()||i>=grid.size()||grid[i][j]=='0') return;
        grid[i][j]='0';
        int dx[4]={-1,0,1,0};
        int dy[4]={0,-1,0,1};
        for(int x=0;x<4;x++){
            int newx=i+dx[x];
            int newy=j+dy[x];
            dfs(grid,newx,newy);
        }
        
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
