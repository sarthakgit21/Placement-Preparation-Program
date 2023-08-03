
    
    
    class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 

      vector<vector<int>>dp(n,vector<int>(W+1,0));

      for(int i=wt[0];i<=W;i++){

          dp[0][i]=val[0];

      }

      //  solved for noe solve after that 

      for(int ind=1;ind<n;ind++){

          for(int j=1;j<=W;j++){

              int notTaken=dp[ind-1][j];

               int taken=0;

               if(j>=wt[ind]){

                   taken=val[ind]+ dp[ind-1][j-wt[ind]];

               }

               dp[ind][j]=max(taken,notTaken);

          }

      }

      return dp[n-1][W];

   
       
    }
};
