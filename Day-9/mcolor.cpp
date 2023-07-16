public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
     bool issafe(int node,int col[],bool graph[101][101],int pre,int n){
        for(int i=0;i<n;i++){
            if(i!=node&&graph[node][i]==1&&col[i]==pre) return false;
        }
        return true;
    }
    
    bool solve(int col[],bool graph[101][101], int m, int n,int node){
        if(node==n){
            return true;
        }
        for(int i=1;i<=m;i++){
            if(issafe(node,col,graph,i,n)){
                col[node]=i;
                if(solve(col,graph,m,n,node+1)) return true;
                col[node]=0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int col[m]={0};
        return solve(col,graph,m,n,0);
    }
