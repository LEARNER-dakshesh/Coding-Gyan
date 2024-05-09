class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
//         priority_queue<int>pq;
//         long long c=0;
//         long long sum=0;
//         for(int x=0;x<happiness.size();x++)
//         {
//             pq.push(happiness[x]);
//         }
//         priority_queue<int>pq1;
//         while(k--)
//         {
//             int topa=pq.top();
//             sum+=topa;
//             pq.pop();
//             while(!pq.empty())
//             {
//                 int value=pq.top();
//                 cout<<value-1<<" ";
//                 pq1.push(value-1);
//                 pq.pop();
//             }
//             cout<<endl;
    
//             pq=pq1;
//         }
//         return sum;
        sort(h.begin(),h.end());
        long long c=0;
        long long sum=0;
       for(int x=h.size()-1;x>=0;x--)
       {
           if(h[x]-c>0)
           {
           sum+=h[x]-c;
           }
           else{
               sum+=0;
           }
           c++;
           k--;
           if(k==0)
           {
               return sum;
           }
       }
        return sum;
    }
};