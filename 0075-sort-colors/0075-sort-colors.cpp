class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int mid=0;
        int hg=nums.size()-1;
        while(mid<=hg){
            if(nums[mid]==1) {
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[hg]);
                hg--;
            }
            else{
                swap(nums[mid],nums[l]);
                l++;
                mid++;
            }
        }
        
    }
};