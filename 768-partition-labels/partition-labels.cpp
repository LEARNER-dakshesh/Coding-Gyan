class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int x=0;x<s.size();x++)
        {
          mp[s[x]]=x+1;
        }
        for(auto x:mp)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        vector<int>v;
        string w="";
        for(int x=0;x<s.size();x++)
        {
                int store=x;
                int i=x,maxindex=mp[s[x]];
                while(i<maxindex)
                {
                    w+=s[i];
                    maxindex=max(maxindex,mp[s[i]]);
                    i++;
                }
                cout<<w<<endl;
                v.push_back(w.size());
                w="";
                x=i-1;
        }
        return v;
    }
};