class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int> > p;
    int kk;
    KthLargest(int k, vector<int>& nums) {
        kk=k;
        for(auto x:nums){
            p.push(x);
            if(p.size()>k) p.pop();
        }
    }
    
    int add(int val) {
        p.push(val);
        if(p.size()>kk) p.pop();
        return p.top();
    }
};
