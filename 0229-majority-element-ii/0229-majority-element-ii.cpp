class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num_one=-1;
        int num_two=-1;
        int c1=0;
        int c2=0;
        for(auto it:nums){
            if(it==num_one) c1++;
            else if(it==num_two) c2++;
            else if(c1==0){
                c1=1;
                num_one=it;
            }
            else if(c2==0){
                c2=1;
                num_two=it;
            }
            else {
                c1--;
                c2--;
            }
        }
        int a=0;
        int b=0;
        for(auto it:nums) if(num_one==it) a++;
        for(auto it:nums) if(num_two==it) b++;
        vector<int> ans;
        if(a>n/3) ans.push_back(num_one);
        if(b>n/3 && num_one!=num_two) ans.push_back(num_two);
        return ans;
    }
};