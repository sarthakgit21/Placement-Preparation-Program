class Solution {
private:
    int helper(vector<vector<int>>& events, int k,vector<vector<int>> &dp,int ind){
        if(ind==events.size()||k==0){
            return 0;
        }
        if(dp[ind][k]!=-1) return dp[ind][k];
        vector<int> temp = {events[ind][1],INT_MAX,INT_MAX};        
        int inx = upper_bound(events.begin(), events.end(), temp)-events.begin();
        int one=events[ind][2]+helper(events,k-1,dp,inx);
        int two=helper(events,k,dp,ind+1);
        return dp[ind][k]=max(one,two);
    }
    
    
public:
    int maxValue(vector<vector<int>>& events, int k) {
        int n=events.size();
        sort(events.begin(),events.end());
        vector<vector<int>> dp(n+5,vector<int> (k+1,-1));
        return helper(events,k,dp,0);
        
    }
};