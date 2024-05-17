class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& br) {
       if(br.size() == 1 || br.size() == 0)
            return br;
    unordered_map<int,int>mp;
     for(int x=0;x<br.size();x++)
     {
        mp[br[x]]++;
     } 
     priority_queue<pair<int,int>>pq;
     for(auto x:mp)
     {
        pq.push({x.second,x.first});
     }
     vector<int>ans;
     while(pq.top().first>0)
     {
        pair<int,int> p = pq.top();
            pq.pop();
            ans.push_back(p.second);
            p.first--;
            pair<int,int> p2 = pq.top();
            pq.pop();
            if(p2.first > 0){
                ans.push_back(p2.second);
                p2.first--;
            }
      pq.push(p);
      pq.push(p2);
     }
     return ans;
    }
};