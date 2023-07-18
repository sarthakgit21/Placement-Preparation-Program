class Solution {
public:
    bool cando(int mid,vector<int> &stall,int cows){
        int f=stall[0];int cnt=1;
        for(int i=1;i<stall.size();i++){
            if(stall[i]-f>=mid){
                cnt++;f=stall[i];
            }
            if(cnt==cows) return true;
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        int l=1;
        int ans=0;
        sort(stalls.begin(),stalls.end());
        int h=stalls[n-1]-stalls[0];
        // cout<<h<<endl;
        while(l<=h){
            int mid=(l+h)/2;
            if(cando(mid,stalls,k)){
                ans=mid;
                // cout<<ans<<endl;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};
