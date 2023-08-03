class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int suffix=1;
        int prefix=1;
        
        int ans=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            if(suffix==0) suffix=1;
            if(prefix==0) prefix=1;
            
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            
            ans=max(ans,max(suffix,prefix));
        }
        
        return ans;
        
        
        
    }
};
