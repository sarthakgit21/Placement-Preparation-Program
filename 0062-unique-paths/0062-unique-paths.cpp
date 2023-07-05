class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> cur(m,1);
        vector<int> prev(m,1);
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                cur[j]=prev[j]+cur[j-1];
            }
            prev=cur;
        }
        return prev[m-1];
        
    }
};