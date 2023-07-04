class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        
        int i=0;
        for(int i=0;i<m;i++) ans.push_back(nums1[i]);
        for(auto it:nums2) ans.push_back(it);
        sort(ans.begin(),ans.end());
        nums1=ans;
    }
};