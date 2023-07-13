class Solution {
public:
void fun(vector<int> &nums,vector<vector<int>> &ans,int ind,vector<int>& c){                                 ans.push_back(c);
        for(int i=ind-1;i>=0;i--){
            if(i!=ind-1&&nums[i]==nums[i+1]) continue;
            c.push_back(nums[i]);
            fun(nums,ans,i,c);
            c.pop_back();
        }
        return;
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        int n=nums.size();
          vector<vector<int>> ans;
        vector<int> c;
        sort(nums.begin(),nums.end());
        fun(nums,ans,n,c);
        // cout<<s.size();
      
        return ans;
    }
};