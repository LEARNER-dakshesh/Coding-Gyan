class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<pair<int,int>>pq;
        pq.push({intervals[0][0],intervals[0][1]});
        for(int x=1;x<intervals.size();x++)
        {
           pair<int,int>p={pq.top().first,pq.top().second};
           if(p.second>=intervals[x][0]){
               pq.pop();
               int r=max(intervals[x][1],p.second);
               pq.push({p.first,r});
           }
           else{
               pq.push({intervals[x][0],intervals[x][1]});
           }
        }
        vector<vector<int>>res;
        vector<int>v;
        while(!pq.empty())
        {
            int first=pq.top().first;
            int second=pq.top().second;
            v.push_back(first);
            v.push_back(second);
            res.push_back(v);
            v.clear();
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};