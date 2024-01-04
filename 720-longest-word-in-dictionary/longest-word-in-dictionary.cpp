class Solution {
public:
    string longestWord(vector<string>& words) {
        vector<string>v;
        map<string,int>mp;
        string store="";
        int maxa=0;
        sort(words.begin(),words.end());
        for(int x=words.size()-1;x>=0;x--)
        {
            string w=words[x];
            string w1="";
            int f=0;
            for(int i=0;i<w.size();i++)
            {
              w1+=w[i];
              auto it=find(words.begin(),words.end(),w1);
              if(it==words.end())
              {
                  f=1;
                  break;
              }
            }
            if(f==0)
            {
                int size=w1.size();
                maxa=max(maxa,size);
                v.push_back(w1);
                mp[w1]=size;
            }
        }
        sort(v.begin(),v.end());
        for(int x=0;x<v.size();x++)
        {
            cout<<v[x]<<" ";
        }
        for(auto x:mp)
        {
            if(x.second==maxa)
            {
                return x.first;
            }
        }
        return store;
    }
};