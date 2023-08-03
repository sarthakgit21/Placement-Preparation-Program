class Solution {
public:
    int dp[1001][1001];
    
    int fun(string &s1,string &s2,int i,int j)
    {
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int val=0;
        if(s1[i]==s2[j]){
            val=1+fun(s1,s2,i-1,j-1);
        }
        else{
            val=max(fun(s1,s2,i-1,j),fun(s1,s2,i,j-1));
        }
        return dp[i][j]=val;
    }
    
    int longestCommonSubsequence(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
        int n=s1.size();
        int m=s2.size();
        int ans=fun(s1,s2,n-1,m-1);
        return ans;
    }
};
