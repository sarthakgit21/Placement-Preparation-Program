int Solution::solve(vector<int> &A, int B) {
        // int i=0;
    // int j=0;
    // int xor=0;
    int n1=A.size();
    int ans=0;
    map<int,int> mp;
    mp[0]=1;
    int prev_xor=0;
    for(int i=0;i<n1;i++){
        prev_xor^=A[i];
        ans+=mp[prev_xor^B];
        mp[prev_xor]++;
    }
    return  ans;
}
