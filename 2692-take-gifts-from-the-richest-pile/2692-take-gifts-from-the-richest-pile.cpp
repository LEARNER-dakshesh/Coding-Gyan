class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
    //    
    priority_queue<int>pq;
    for(int x=0;x<gifts.size();x++)
    {
        pq.push(gifts[x]);
    }
    while(k>0 && !pq.empty())
    {
        int top=pq.top();
        pq.pop();
        pq.push(floor(sqrt(top)));
        k--;
    }
    long long sum=0;
    while(!pq.empty())
    {
        sum+=pq.top();
        pq.pop();
    }
    return sum;
    
    }
};