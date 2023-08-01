class Solution
{
	public:
	void dfs(int V,int vis[], vector<int> adj[],stack<int> &st){
	    vis[V]=1;
	    for(auto x:adj[V]){
	        if(!vis[x]){
	            dfs(x,vis,adj,st);
	        }
	    }
	    st.push(V);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    int vis[V]={0};
	    stack<int> st;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,vis,adj,st);
	        }
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};
