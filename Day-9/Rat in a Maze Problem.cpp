
class Solution{
    public:
    vector<string>ans;
    void solve(vector<vector<int>>&m,int i,int j,string s){
        if(i==m.size()-1 && j==m[0].size()-1 && m[i][j]==1){
            ans.push_back(s);
            return ;
        }
        if(i<m.size() && j<m[0].size() && i>=0 &&j>=0 && m[i][j]==1){
        m[i][j]=0;
        solve(m,i+1,j,s+'D');
        solve(m,i-1,j,s+'U');
        solve(m,i,j+1,s+'R');
        solve(m,i,j-1,s+'L');
        m[i][j]=1;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
    string a;
    solve(m,0,0,a);    
    return ans;    
    }
};
