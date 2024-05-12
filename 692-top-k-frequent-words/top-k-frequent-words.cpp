class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
       unordered_map<string,int>mp;
       for(int x=0;x<words.size();x++)
       {
          mp[words[x]]++;
       } 
       auto cmp=[](pair<int,string>&a,pair<int,string>&b)
       {
        if(a.first==b.first)
        {
            return a.second>b.second;
        }
        return a.first<b.first;
       };
       priority_queue<pair<int,string>,vector<pair<int,string>>,decltype(cmp)>pq(cmp);
       for(auto x:mp)
       {
        pq.push({x.second,x.first});
       }
       vector<string>v;
       while(k>0 && !pq.empty())
       {
        v.push_back(pq.top().second);
        pq.pop();
        k--;
       }
       return v;
    }
};