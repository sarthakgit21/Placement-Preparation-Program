	int dp[1001][1001];
	int fun(int arr[],int ind,int prev,int n)
	{
	    if(ind==n){
	        return 0;
	    }
	    if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
	    
	    int not_take=fun(arr,ind+1,prev,n);
	    int take=INT_MIN;
	    if(prev==-1||arr[ind]>arr[prev])
	    {
	        take=arr[ind]+fun(arr,ind+1,ind,n);
	    }
	    
	    return dp[ind][prev+1]=max(take,not_take);
	    
	    
	}
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    memset(dp,-1,sizeof(dp));
	    return fun(arr,0,-1,n);
	}  
