//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

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

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends