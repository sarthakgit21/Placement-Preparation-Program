class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
    }
    
    void callFun(string s,vector<vector<string>> &ans,int ind,int n,vector<string> &v){
        if(ind==n){
            ans.push_back(v);
            return ;
        }
        for(int i=ind;i<n;i++){
            if(isPalindrome(s,ind,i)){
                v.push_back(s.substr(ind,i-ind+1));
                callFun(s,ans,i+1,n,v);
                v.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        int n=s.size();
        vector<string> v;
        callFun(s,ans,0,n,v);
        return ans;
    }
};