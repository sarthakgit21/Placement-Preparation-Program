class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> set;
        int i=0;
        int j=i+1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        while(i<n-2){
            if(i>0&&nums[i-1]==nums[i]) {i++;continue;}
            j=i+1;
            int k=n-1;
            while(j<k){
                long sum=nums[i]+nums[j];
                sum+=nums[k];
                if(sum==0){
                    vector<int> v={nums[i],nums[j],nums[k]};
                    ans.push_back(v);
                    while(j<k &&nums[j]==nums[j+1]) j++;
                    while(k>j &&nums[k]==nums[k-1]) k--;
                    // if(j>=k) break;
                    // cout<<i<<" "<<j<<" "<<k<<" "<<sum<<endl;
                    j++;
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
            i++;
            // cout<<i<<endl;
        }

        return ans;
    }
};