class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int>pq;
        for(int x=0;x<piles.size();x++)
        {
            pq.push(piles[x]);
        }
        while(!pq.empty() && k>0)
        {
            int topa=pq.top();
            int half=floor(topa/2);
            int final=topa-half;
            pq.pop();
            pq.push(final);
            k--;
        }
        int sum=0;
        while(!pq.empty())
        {
           sum+=pq.top();
           pq.pop();
        }
        return sum;
    }
};