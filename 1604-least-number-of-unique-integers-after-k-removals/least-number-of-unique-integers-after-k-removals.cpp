class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        typedef pair<int,int>pi;
        for(int x=0;x<arr.size();x++)
        {
            mp[arr[x]]++;
        }
        priority_queue<pi, vector<pi>, greater<pi> > pq; 
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        // while(!pq.empty())
        // {
        //     cout<<pq.top().first<<" "<<pq.top().second<<endl;
        //     pq.pop();
        // }
        int c=0;
        while(c<k)
        {
            int first=pq.top().first;
            if(c+first<=k)
            {
                c+=first;
                pq.pop();
            }
            else{
                break;
            }
        }
        return pq.size();
    }
};