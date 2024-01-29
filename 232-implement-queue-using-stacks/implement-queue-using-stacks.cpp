class MyQueue {
public:
 stack<int>s1;
 stack<int>s2;
    MyQueue() {
       
    }
    
    void push(int x) {
        while(!s1.empty())
        {
         int t=s1.top();
        //  cout<<t<<" ";
         s2.push(t);
         s1.pop();
        }
        s2.push(x);
        while(!s2.empty())
        {
            int t=s2.top();
            // cout<<t<<" ";
            s1.push(t);
            s2.pop();
        }

    }
    
    int pop() {
        
       int curr=s1.top();
       s1.pop();
       return curr;
    }
    
    int peek() {
    return s1.top();  
    }
    
    bool empty() {
        while(!s1.empty())
        {
         int t=s1.top();
         s2.push(t);
         s1.pop();
        }
        while(!s2.empty())
        {
            int t=s2.top();
            s1.push(t);
            s2.pop();
        }
        if(s1.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */