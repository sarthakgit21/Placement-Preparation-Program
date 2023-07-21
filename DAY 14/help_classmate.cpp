    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        int finaln=2*n;
        
        stack<int> st;
        
        unordered_map<int,int>  mp;
        
        vector<int> ans;
        
        for(int i=n-1;i>=0;i--){
            int num=arr[i%n];
            
            while(!st.empty()&&st.top()>=num){
                st.pop();
            }

            if(st.empty()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(st.top());
            }
            
            
            st.push(num);
        }
        
        reverse(begin(ans),end(ans));
        return ans;
    } 
