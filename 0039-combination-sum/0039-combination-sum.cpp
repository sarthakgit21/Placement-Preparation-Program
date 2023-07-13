class Solution {
public:
    void numFun(vector<int>& candidates, vector<vector<int>> &ans,int target,int ind,vector<int> &arr){
        if(target==0){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<candidates.size();i++){
            // if()
            if(candidates[i]<=target){
                arr.push_back(candidates[i]);
                numFun(candidates,ans,target-candidates[i],i,arr);
                arr.pop_back();
            }
            else{
                break;
            }
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(begin(candidates),end(candidates));
        numFun(candidates,ans,target,0,arr);
        return ans;
    }
};