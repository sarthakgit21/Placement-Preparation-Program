class Solution {
public:
    void fun(vector<vector<int>> &ans,vector<int>& s,int ind){
        if(ind==s.size()){
            ans.push_back(s);
            return;
        }
        for(int i=ind;i<s.size();i++){
            swap(s[i],s[ind]);
            fun(ans,s,ind+1);
            swap(s[i],s[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& s) {
         vector<vector<int>> ans;
        fun(ans,s,0);
        return ans;
    }
};
