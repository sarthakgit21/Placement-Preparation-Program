class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(c==0){
                ans=nums[i];
            }
            if(ans==nums[i]) c++;
            else c--;
        }
        return ans;
    }
};