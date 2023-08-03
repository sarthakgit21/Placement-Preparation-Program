class Solution {
public:
    int dp[2501];
    int finalans=0;
    int fun(vector<int> & nums,int ind)
    {
        if(dp[ind]!=-1) return dp[ind];
        
        int ans=1;
        
        for(int i=ind-1;i>=0;i--)
        {
            if(nums[i]<nums[ind])
            {
                ans=max(ans,fun(nums,i)+1);
            }
        }
        return dp[ind]=ans;
        
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        memset(dp,-1,sizeof(dp));
        ans=fun(nums,n-1);
        // for(int i=0;i<nli++)
        for(int i=0;i<n;i++){
            ans=max(ans,fun(nums,i));
        }
        
        return ans;
    }
};
