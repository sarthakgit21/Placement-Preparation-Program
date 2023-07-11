class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int ans=0;
        for(auto it :nums){
            if(it==1){
                sum++;
            }
            else{
                ans=max(ans,sum);
                sum=0;
            }
        }
        ans=max(ans,sum);

        return ans;
    }
};