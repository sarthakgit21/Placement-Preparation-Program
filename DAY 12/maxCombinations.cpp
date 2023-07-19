  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        set<pair<int,int>> st;
        priority_queue<pair<int,pair<int,int>>> pq;
        vector<int> ans;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        pq.push({A[N-1]+B[N-1],{N-1,N-1}});
        st.insert({N-1,N-1});
        while(K--)
        {
            
            auto it= pq.top();
            pq.pop();
            int sum=it.first;
            ans.push_back(sum);
            int x=it.second.first;
            int y=it.second.second;
            if(y-1>=0 &&st.find({x,y-1})==st.end()){
                pq.push({A[x]+B[y-1],{x,y-1}});
                st.insert({x,y-1});
            }
            if(x-1>=0&&st.find({x-1,y})==st.end()){
                pq.push({A[x-1]+B[y],{x-1,y}});
                st.insert({x-1,y});
            }
               
        }
        return ans;
    }
