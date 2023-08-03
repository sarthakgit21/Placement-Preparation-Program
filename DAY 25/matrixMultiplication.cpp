class Solution{
public:
    int dp[1001][1001];

    int fun(int n,int arr[],int i,int j)
    {
        
        if(i==j)
        {
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
    
        int val=INT_MAX;
        for(int k=i;k<j;k++)
        {
            val=min(val,(arr[i-1]*arr[k]*arr[j])+fun(n,arr,i,k)+fun(n,arr,k+1,j));
        }
        
        return dp[i][j]=val;
        
    }


    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        if(N==0) return 0;
        return fun(N,arr,1,N-1);
        
    }
