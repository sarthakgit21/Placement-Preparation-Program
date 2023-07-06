class Solution {
public:
    vector<int> twoSum(vector<int>& target, int targets) {
        map<int,int> mp;
        for(int i=0;i<target.size();i++){
            if(mp.find(targets-target[i])!=mp.end()){
                return {mp[targets-target[i]],i};
            }
            mp[target[i]]=i;
        }
               return {0,0};
    }
};