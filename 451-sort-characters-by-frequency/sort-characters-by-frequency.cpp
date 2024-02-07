class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(int x=0;x<s.size();x++)
        {
          m[s[x]]++;  
       }
  
     priority_queue<pair<int ,char>>pq;
     for(auto it=m.begin();it!=m.end();it++)
     {
      pq.push(make_pair(it->second,it->first));
     }
     string s1="";
     while(pq.size()!=0)
     {

       char ch=pq.top().second;
       int x=pq.top().first;
       while(x--)
       {
         s1+=ch;
       }
       pq.pop();
     }
     return s1;
    }
};