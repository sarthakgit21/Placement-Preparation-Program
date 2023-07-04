class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            int pro=prices[i]-mini;
            mini=min(mini,prices[i]);
            ans=max(ans,pro);
        }
        return ans;
    }
};