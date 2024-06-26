class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int x=0;x<capacity.size();x++)
        {
            pq.push(capacity[x]-rocks[x]);
        }
        int cnt=0;
        while(additionalRocks>0 && !pq.empty())
        {
            if(pq.top()<=0)
            {
                cnt++;
            }
            else{
             if(pq.top()<=additionalRocks)
             {
                additionalRocks-=pq.top();
                cnt++;
             }
             else{
                break;
             }
            }
            pq.pop();
        }
        return cnt;
    }
};