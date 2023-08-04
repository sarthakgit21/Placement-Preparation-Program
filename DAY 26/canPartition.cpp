class Solution {
private:
    int dp[201][20002];
    bool findPartition(vector<int>&nums,int ind,int sum)
    {
        if(sum==0){
            return true;
        }
        if(ind==nums.size()) return false;
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        
        bool take=findPartition(nums,ind+1,sum);
        
        bool nottake=false;
        if(sum>=nums[ind])
             nottake=findPartition(nums,ind+1,sum-nums[ind]);
        return dp[ind][sum]=(take|nottake);
        
    }
    
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        memset(dp,-1,sizeof(dp));
        if(nums.size()==0) return sum;
        for(auto x:nums) sum+=x;
        if(sum&1) return false;
        return findPartition(nums,0,sum/2);
    }
};
