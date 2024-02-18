class Solution {
public:
// typedef pair<int, int> pi;
// struct Compare {
//     bool operator()(const pi& a, const pi& b) const {
//         if (a.first == b.first) {
//             return a.second < b.second; 
//          }
//         return a.first > b.first; 
//     }
// };

    int miceAndCheese(vector<int>& r1, vector<int>& r2, int k) {
        // typedef pair<int,int>pipriority_queue<int>pq;
        priority_queue<int>pq;
        long long int ans=0;
        for(int i=0;i<r1.size();i++){
           pq.push(r1[i]-r2[i]);
            ans+=r2[i];
        }
        while(k!=0){
          ans+=pq.top();
            pq.pop();
            k--;
        }
        return ans;
        // priority_queue<pi, vector<pi>, Compare> pq;
        // for(int x=0;x<reward1.size();x++)
        // {
        //     pq.push({reward2[x],reward1[x]});
        // }
        // while(!pq.empty())
        // {
        //     cout<<pq.top().first<<" "<<pq.top().second<<endl;
        //     pq.pop();
        // }
        // int totalmouse2=accumulate(reward2.begin(),reward2.end(),0);
        // sort(reward2.begin(),reward2.end());
        // int c=0;
        // while(c<k)
        // {
        //     totalmouse2-=pq.top().first;
        //     totalmouse2+=pq.top().second;
        //     pq.pop();
        //     c++;
        // }
        // cout<<totalmouse2<<" ";
        // sort(reward1.begin(),reward1.end());
        // for(int x=reward1.size()-k;x<reward1.size();x++)
        // {
        //     totalmouse2+=reward1[x];
        // }
       // return totalmouse2;
    }
};