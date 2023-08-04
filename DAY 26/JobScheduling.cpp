class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static srt(Job arr1,Job arr2){
        if(arr1.dead==arr2.dead) return arr1.profit>arr2.profit;
        return arr1.dead<arr2.dead;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
         priority_queue<int, vector<int>, greater<int>> pq;
        sort(arr, arr + n, srt);
        int cap = 1;
        for(int i = 0; i < n; i++){
            if(arr[i].dead >= cap) {
                pq.push(arr[i].profit);
                cap ++;
            }
            else{
                if(arr[i].profit > pq.top()){
                    pq.pop();
                    pq.push(arr[i].profit);
                }
            }
        }
        int ans = 0;
        int sz = pq.size();
        while(!pq.empty()){
            // cout << pq.top() << " ";
            ans += pq.top();
            pq.pop();
        }
        // cout << endl;
        vector<int> ret = {sz, ans};
        return ret;
    
    } 
};
