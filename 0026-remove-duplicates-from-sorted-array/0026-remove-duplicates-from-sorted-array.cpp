class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            nums[j++]=nums[i];
            while(i+1<nums.size()&&nums[i+1]==nums[i]){
                i++;
            }
        }
        return j;
    }
};