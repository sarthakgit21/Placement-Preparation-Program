vector<int> Solution::dNums(vector<int> &A, int B) {
    int n=A.size();
    vector<int> ans;
    if(B>n) return ans;
    map<int,int> mp;
    int i=0;
    int j=0;
    while(i<n)
    {
        mp[A[i]]++;
        if(i-j+1==B)
        {
            ans.push_back(mp.size());
            mp[A[j]]--;
            // cout<<mp[A[j]];
            if(mp[A[j]]==0)mp.erase(A[j]);
            j++;
        }
        i++;
    }
    return ans;
}
