
#include <bits/stdc++.h>
bool canAllocate(int mid,int B,vector<int> &A){
    int count=1;
    int prev=-1;
    int sum=0;
    for(int i=0;i<A.size();i++){
        if(sum+A[i]<=mid) sum+=A[i];
        else count++,sum=A[i];
    }
    return  count<=B;
    
}

int Solution::books(vector<int> &A, int B) {
    int high=accumulate(A.begin(),A.end(),0);
    if(A.size()<B)
    return -1;
    int low=*max_element(A.begin(),A.end());
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(canAllocate(mid,B,A)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
    
}
