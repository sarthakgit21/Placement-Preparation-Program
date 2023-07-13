class Solution {
public:
void fun(vector<int> &nums,set<vector<int>> &s,int ind,vector<int>& c){                                 s.insert(c);
        for(int i=ind-1;i>=0;i--){
            c.push_back(nums[i]);
            fun(nums,s,i,c);
            c.pop_back();
        }
        // return;
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        int n=nums.size();
        vector<int> c;
        sort(nums.begin(),nums.end());
        fun(nums,s,n,c);
        // cout<<s.size();
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};