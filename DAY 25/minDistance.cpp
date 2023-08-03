class Solution {
public:
    
    int dp[501][501];
    int fun(string &s1,string &s2,int i,int j)
    {

        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]){
            return dp[i][j]=fun(s1,s2,i-1,j-1);
        }
        return dp[i][j]=1+min(fun(s1,s2,i-1,j-1),min(fun(s1,s2,i,j-1),fun(s1,s2,i-1,j)));
        
    }
    
    int minDistance(string s1, string s2) {
        memset(dp,-1,sizeof(dp));
        int n=s1.size();
        int m=s2.size();
        return fun(s1,s2,n-1,m-1);
    }
};
