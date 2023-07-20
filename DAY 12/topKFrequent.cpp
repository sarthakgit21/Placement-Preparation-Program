    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> pq;
        map<int,int> mp;
        for(auto x:nums) mp[x]++;
        for(auto x:mp) {
            pq.push({x.second,x.first});
                       }
        while(!pq.empty()){
            if(ans.size()<k){
                ans.push_back(pq.top().second);
            }
            else{
                break;
            }
            pq.pop();
        }
        return ans;
    }
