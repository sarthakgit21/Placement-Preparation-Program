class disjoint{
    
    vector<int> rank;
    vector<int> parent;
    vector<int> size;
    
    public:
    disjoint(int n){
        size.resize(n+1);
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i =0;i < n;i++){
            parent[i] = i;
            size[i] = 1;
        }
    }
    
    int findpar(int u){
        if(u == parent[u])
        return u;
        return parent[u] = findpar(parent[u]);
    }
    
    void unionbyrank(int a,int b){
        int u = findpar(a);
        int v = findpar(b);
        
        if(u == v) return ;
        if(rank[u] < rank[v]){
            parent[u] = v;
        }else if(rank[u] > rank[v]){
            parent[v] = u;
        }else{
            parent[u] = v;
            rank[v]++;
        }
    }
    
    void unionbysize(int a,int b){
        int u = findpar(a);
        int v = findpar(b);
        
        if(u == v) return;
        
        if(size[u] > size[v]){
            parent[v] = u;
            size[u] += size[v];
        }else{
            parent[u] = v;
            size[v] + size[u];
        }
    }
    
};
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<pair<int,pair<int,int>>> edges;
        
        for(int i =0;i < V;i++){
            for(auto it:adj[i]){
                int node = i;
                int adjnode = it[0];
                int wt = it[1];
                edges.push_back({wt,{node,adjnode}});
            }
        }
        
        disjoint ds(V);
        sort(edges.begin(),edges.end());
        
        int ans = 0;
        for(auto it:edges){
            int ewt = it.first;
            int adjnode = it.second.first;
            int node = it.second.second;
            if(ds.findpar(node) != ds.findpar(adjnode)){
                ans += ewt;
                ds.unionbysize(node,adjnode);
            }
        }
        
        return ans;
    }
};
