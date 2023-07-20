    MyStack() {
        
    }
    queue<int> q;
    int n=0;
    void push(int x) {
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
        n++;
    }
    
    int pop() {
        n--;
        int val=q.front();
        q.pop();
        return val;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return n==0;
    }
