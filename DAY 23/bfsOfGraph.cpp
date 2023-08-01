    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int> q;
        vector<int> vis(V,false);
        vis[0]=true;
        q.push(0);
        vector<int> ans;
        while(!q.empty()){
            auto it=q.front();
           
            ans.push_back(it);
            q.pop();
            for(auto x:adj[it]){
                if(!vis[x]){
                 vis[x]=true;
                    q.push(x);
                }
            }
        }
        return ans;
    }
