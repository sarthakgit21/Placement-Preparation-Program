class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        stack<int> st;
        map<int,int> mp;
        
        for(int i=0;i<nums2.size();i++){
            while(!st.empty()&&st.top()<nums2[i]){
                mp[st.top()]=nums2[i];
                st.pop();
            }
           st.push(nums2[i]);
        }
        for(auto &it:nums1){
            it=mp.count(it)?mp[it]:-1;
        }
        return nums1;
    }
};
