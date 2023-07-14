class Solution {
public:

    void fun(int ind,int n,vector<vector<string>> &ans,vector<string> &v,string s, vector<int>&left, vector<int>&downdia, vector<int>&updia){
        if(ind ==n){
            ans.push_back(v);
            return;
        }
        
        for(int rw=0;rw<n;rw++){
            if(left[rw]==0&&downdia[rw+ind]==0&&updia[n-1+ind-rw]==0){
                v[rw][ind] = 'Q';
                left[rw]=1;
                downdia[rw+ind]=1;
                updia[n-1+ind-rw]=1;
                fun(ind+1,n,ans,v,s,left,downdia,updia);
                v[rw][ind] = '.';
                left[rw]=0;
                downdia[rw+ind]=0;
                updia[n-1+ind-rw]=0;
                
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> v(n);
        string s(n,'.');
          vector<int> left(n,0);
        vector<int> updia(2*n-1,0);
        vector<int> downdia(2*n-1,0);
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        fun(0,n,ans,v,s,left,updia,downdia);
        return ans;
    }
};
