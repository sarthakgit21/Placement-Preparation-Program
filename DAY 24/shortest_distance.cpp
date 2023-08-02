class Solution {
  public:
	void shortest_distance(vector<vector<int>>&mm){
	    // Code here
	    int n=mm.size();
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(mm[i][j]==-1){
	                mm[i][j]=1e8;
	            }
	            if(i==j){
	                mm[i][j]=0;
	            }
	        }
	    }
	    
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            mm[i][j]=min(mm[i][j],mm[i][k]+mm[k][j]);
	        }
	    }
	    }
	    
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(mm[i][j]==1e8){
	                mm[i][j]=-1;
	            }

	        }
	    }
	    
	}
