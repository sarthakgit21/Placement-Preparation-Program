 int orangesRotting(vector<vector<int>>& grid) 
    {
        int ans=-1;
        
        int n=grid.size();
        
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        
        vector<vector<int>> vis(n,vector<int> (m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    
                    vis[i][j]=1;
                }
            }
        }
        
        int dx[4]={-1,0,1,0};
        
        int dy[4]={0,1,0,-1};
        
        while(!q.empty())
        {
            
            int size=q.size();
            
            while(size--)
            {
                
                auto it=q.front();
                
                q.pop();
                
                int row=it.first;
                
                int col=it.second;
                
                
                for(int i=0;i<4;i++)
                {
                    
                    int nrow=row+dx[i];
                    
                    int ncol=col+dy[i];
                    
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
                    {
                        
                        vis[nrow][ncol]=1;
                        
                        grid[nrow][ncol]=2;
                        
                        q.push({nrow,ncol});
                        
                    }
                    
                }
                
            }
            ans++;
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                   if(!vis[i][j])
                   {
                       return -1;
                   }
                }
            }
        }
        
        return ans==-1?0:ans;
        
        
