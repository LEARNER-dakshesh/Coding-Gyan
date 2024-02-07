class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(int x=0;x<arr.size();x++)
        {
            mp[arr[x]]++;
        }
        int r=arr.size();
        priority_queue<int>pq;
        for(auto x:mp)
        {
           pq.push(x.second);
        }
        // while(!pq.empty())
        // {
        //     cout<<pq.top();
        //     pq.pop();
        // }
        // cout<<r;
        int sum=0,c=0;
        while(sum<r/2)
        {
             sum+=pq.top();
             pq.pop();
             c+=1;
        }
        return c;
        
        
    }
};