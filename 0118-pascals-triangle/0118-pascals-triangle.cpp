class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>temp ={1};
        ans.emplace_back(temp);
        for(int i =1;i<numRows;i++)
        {
            vector<int>v={1};
            int res =1;
            for(int j =0;j<i;j++)
            {
               res *=(i-j);
               res/=(j+1);
               v.push_back(res);
            }
            ans.emplace_back(v);
        }
        return ans;
    }
};