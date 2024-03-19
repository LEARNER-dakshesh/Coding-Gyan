class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int>ch;
         map<char,int>mp;
         for(int x=0;x<s.size();x++)
         {

            mp[s[x]]++;
         }
         vector<int>sol;
         for(int x=0;x<s.size();x++)
         {
            if(s[x]=='?')
            {
                int mini=INT_MAX;
                char store='a';
                for(int x='a';x<='z';x++)
                {
                    if(mp[x]<mini)
                    {
                        mini=mp[x];
                        store=x;
                    }
                }
                sol.push_back(store);
                mp[store]++;
            }
         }
         sort(sol.begin(),sol.end());
         int c=0;
         for(int x=0;x<s.size();x++)
         {
            if(s[x]=='?')
            {
            s[x]=sol[c];
            c++;
            }
         }
         return s;

     } 
}; 