class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast=nums[0];
        int slow=nums[0];
        int flag=1;
        while(slow!=fast or flag){
            if(flag) flag=0;
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        fast=nums[0];
        while(fast!=slow){
            fast=nums[fast];
            slow=nums[slow];
        }
        return fast;
    }
};