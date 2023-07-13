class Solution {
public:
    void recur(vector<int>& candidates, int target,int ind,vector<int>&ds,vector<vector<int>>&ans) {
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(ind>=candidates.size()) return;
        for(int i=ind;i<candidates.size();i++){
            if((i!=ind&&candidates[i]==candidates[i-1])) continue;
            if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            recur(candidates,target-candidates[i],i+1 ,ds,ans);
            ds.pop_back();
            }
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<int> ds;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        recur(candidates,target,0,ds,ans);
        return ans;
    }
};