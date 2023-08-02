
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> ans(V,1e9);
        // priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        set<pair<int,int>> pq;
        ans[S]=0;
        pq.insert({0,S});
        while(!pq.empty()){
            auto it=*(pq.begin());
            int node=it.second;
            int dis=it.first;
            pq.erase(it);
            for(auto it:adj[node]){
                int val=it[1];
                int adj=it[0];
                if(val+dis<ans[adj]){
                    if(ans[adj]!=1e9){
                        pq.erase({ans[adj],adj});
                    }
                    ans[adj]=dis+val;
                    pq.insert({ans[adj],adj});
                }
            }
        }
        return ans;
    }
};
