class FreqStack {
public:
    int pos=0;
    priority_queue<pair<int,pair<int,int>>>pq;
    unordered_map<int,int>mp;
    FreqStack() {
        
    }
    
    void push(int val) {
        pq.push({++mp[val],{++pos,val}});
        
    }
    
    int pop() {
        auto val=pq.top();
        pq.pop();
        int x=val.second.second;
        mp[x]--;
        return x;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */