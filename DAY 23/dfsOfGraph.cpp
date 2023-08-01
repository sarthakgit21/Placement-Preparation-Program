 void dfs(vector<int> adj[],vector<bool> &vis,vector<int>& ans,int node)
  
  {
      ans.push_back(node);
      vis[node]=true;
      for(auto x:adj[node]){
          if(!vis[x]){
              dfs(adj,vis,ans,x);
          }
      }
  }
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> vis(V,false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){
                dfs(adj,vis,ans,i);
            }
        }
        return ans;
    }
