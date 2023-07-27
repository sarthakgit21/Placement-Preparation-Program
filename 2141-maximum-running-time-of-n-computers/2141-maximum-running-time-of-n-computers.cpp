typedef long long ll;

class Solution {
    
private:
    
    bool fun(vector<int> &batteries,ll mid,int n)
    {
        ll val=0;
        for(auto x:batteries){
            if(x<mid) val+=x;
            else val+=mid;
        }
        
        return (val>=mid*n);
    }
    
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        
        long long ans=0;
        
        ll low=0;
        ll high=0;
        
        for(auto x:batteries) high+=x;
        // cout<<high;
        while(low<=high)
        {
            ll mid=low+(high-low)/2;
            if(fun(batteries,mid,n)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        // cout<<ans;
        return ans;
        
    }
};