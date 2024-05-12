class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int count=0;
        while(pq.size()>=2)
        {
            int top1=pq.top();
            top1-=1;
            pq.pop();

            int top2=pq.top();
            top2-=1;
            pq.pop();
          
            if( top2 > 0 ){
            pq.push(top2);
            }
            if(top1> 0)
            {
                pq.push(top1);
            }
           
            count++;
        }
        return count;
    }
};