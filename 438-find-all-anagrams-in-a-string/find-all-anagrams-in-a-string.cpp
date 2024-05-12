class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         int i=0,j=0;
         map<char,int>sol;
         for(int x=0;x<p.size();x++)
         {
            sol[p[x]]++;
         }
        unordered_map<char,int>mp;
        vector<int>v;
        while(j<s.size())
        {
           mp[s[j]]++;
           if((j-i+1)==p.size())
           {
            int f=0;
            for(auto it :sol)
            {
                if(mp.find(it.first)==mp.end() || mp[it.first]!=sol[it.first])
                {
                    mp[s[i]]--;
                    f=1;
                    i++;
                    break;
                }
            }
            if(f==0)
            {
                // for(auto it:mp)
                // {
                //     cout<<it.first<<" "<<endl;
                // }
                // cout<<" hi "<<endl;
                v.push_back(i);
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
           }
           j++; 
        }
         if((j-i+1)==p.size())
           {
            int f=0;
            for(auto it :sol)
            {
                if(mp.find(it.first)==mp.end() || mp[it.first]!=sol[it.first])
                {
                    mp[s[i]]--;
                    f=1;
                    i++;
                    break;
                }
            }
            if(f==0)
            {
                v.push_back(i);
                
                mp[s[i]]--;
                if(mp[s[i]]==0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
           }
        return v;
    }

};