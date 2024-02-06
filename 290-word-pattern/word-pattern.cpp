class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        string w="";
       for(int x=0;x<s.size();x++)
       {
           if(s[x]==' ')
           {
               v.push_back(w);
               w="";
           }
           else{
               w+=s[x];
           }
       }
       v.push_back(w);
// for(int x=0;x<v.size();x++)
// {
// cout<<v[x]<<" ";
// }
         set<string>st;
        unordered_map<char,string>mp;
        if(pattern.size()!=v.size())
        {
            cout<<pattern.size()<<" "<<v.size();
            return false;
        }
        for(int x=0;x<pattern.size();x++)
        {
         if(mp.find(pattern[x])!=mp.end())
         {
             if(mp[pattern[x]]!=v[x])
             {
                 cout<<pattern[x]<<" "<<v[x];
                 return false;
             } 
         }
         else{
             if(st.count(v[x])>0)
             {
                 return false;
             }
             else{
             mp[pattern[x]]=v[x];
             st.insert(v[x]);
         }
         }
        }
        return true;
    }
};