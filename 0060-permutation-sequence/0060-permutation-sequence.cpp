class Solution {
public:
    string getPermutation(int n, int k) {
        // n--;
    
        // int val=((n-1)*n)/2;
        int val=1;
        vector<char> nums;
        for(int i=1;i<n;i++){
            val*=i;
            nums.push_back('0'+i);
        }
        nums.push_back(n+'0');
        // cout<<nums[n-1];

        string ans;
        k--;
        while(1){
            ans+=nums[k/val];
            nums.erase(nums.begin()+k/val);
            if(nums.size()==0) break;
             k=k%val;
            val=val/nums.size();
        }
        return ans;
    }
};