class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
      vector<int>res;
     vector<pair<int,int>>vp;
      unordered_map<int,int>ump;
      for(int x=0;x<mapping.size();x++)
      {
        ump[x]=mapping[x];
      }
      for(int x=0;x<nums.size();x++)
      {
            int n=nums[x];
            vector<int>reve;
            int rev=0;
            if(n==0)
            {
                vp.push_back({ump[n],n});
            }
            else{
            while(n>0)
            {
                int b=n%10;
                // ans=(ans*10)+ump[b];
                reve.push_back(ump[b]);
                n=n/10;
            }
            
           reverse(reve.begin(),reve.end());
           for(int x=0;x<reve.size();x++)
           {
            rev=rev*10+reve[x];
           }
            vp.push_back({rev,nums[x]});
            }
      }   
      stable_sort(vp.begin(), vp.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first < b.first;
        });
      for(int x=0;x<vp.size();x++)
      {
        cout<<vp[x].first<<" "<<vp[x].second<<endl;
        res.push_back(vp[x].second);
      }
      return res;
     


    }
};