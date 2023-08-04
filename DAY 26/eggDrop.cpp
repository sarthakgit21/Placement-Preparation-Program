    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int dp[201][201];
    int solve(int e ,int f){
        if(f==0 || f==1)
            return f;
       
        if(e==1)
            return f;
            
       if(dp[e][f]!=-1)
            return dp[e][f];
            
       int mn=INT_MAX;
       int s1,s2;
       for(int k=1;k<=f;k++){
           if(dp[e-1][k-1]!=-1)
                s1=dp[e-1][k-1];
           else
                s1=solve(e-1,k-1);
                
           if(dp[e][f-k]!=-1)
                s2=dp[e][f-k];
           else
                s2=solve(e,f-k);
                
           int tempAns=1+max(s1,s2);
           mn=min(mn,tempAns);
       }
       return dp[e][f]=mn;
    }
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp,-1,sizeof dp);
        return solve(n,k);
    }
