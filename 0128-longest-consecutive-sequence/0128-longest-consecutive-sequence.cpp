class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        if(nums.size()==0) return 0;
        for(auto it:nums) mp[it]++;
        int prev=mp.begin()->first;
        auto it=mp.begin();
        it++;
        int ans=1;
        int val=1;
        for(;it!=mp.end();it++){
            prev++;
            if(prev==it->first){
                ans++;
            }
            else{
                prev=it->first;
                ans=1;
            }
            val=max(val,ans);

        }
        return val;
    }
};