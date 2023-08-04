class Solution{
public:
bool palindrome(string s,int i,int j){
    if(i==j)return 1;
    while(i<=j)if(s[i++]!=s[j--])return false;
    return true;
}
  int palindromicPartition(string s)
    {
        // code here
    int n=s.size();
    int dp[500];
    memset(dp,-1,sizeof(dp));
    
   function<int(int )>f=[&](int i)->int{
        if(i>=n)return 0;
        if(palindrome(s,i,n-1))return 0;
        int ans=503;
        if(dp[i]!=-1)return dp[i];
        for(int k=i; k<=n-1; k++){
            if(palindrome(s,i,k)){
            
                ans=min(ans,1+f(k+1));
    }
}
        return dp[i]=ans;
    };
   return f(0);
        
    }

};
