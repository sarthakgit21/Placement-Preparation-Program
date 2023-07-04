class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
               map<int,int>m;
        for(auto i: A)
        {
            m[i[0]]++;
            m[i[1]]--;
        }
        vector<vector<int>>ans;
        int prev,preSum=0;
        bool isprev=0;
        for(auto i: m)
        {
            if(!isprev)
            {
                prev=i.first;
                isprev=1;
            }
            preSum+=i.second;
            if(preSum==0)
            {
                vector<int>I(2);
                I[0]=prev;
                I[1]=i.first;
                ans.push_back(I);
                isprev=0;
            }
        }

        return ans;
    }
};