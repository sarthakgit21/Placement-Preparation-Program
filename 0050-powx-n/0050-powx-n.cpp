class Solution {
public:
    double myPow(double x, int n) {
        long val=abs(n);
        double ans=1;
        while(val){
            if(val&1){
                ans*=x;
            }
            x*=x;
            val>>=1;
        }
        if(n<0) return 1/ans;
        return ans;
    }
};