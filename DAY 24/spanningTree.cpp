    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        int sum=0;
        vector<int> vis(V,0);
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int node=it.second;
            int wt=it.first;
            if(vis[node]==1) continue;
            vis[node]=1;
            sum+=wt;
            for(auto c:adj[node]){
                int anode=c[0];
                int awt=c[1];
                if(!vis[anode]){
                    pq.push({awt,anode});
                }
            }
        }
        return sum;
    // }
    }
