class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        vector<int>v;
        int m=bank[0].size();
      //  cout<<m<<endl;
        for(int x=0;x<bank.size();x++)
        {
            int c=0;
          for(int y=0;y<m;y++)
          {
          //   cout<<bank[x][y]<<" ";
              if(bank[x][y]=='1')
              {
                  c++;
              }
             
          } cout<<c<<endl;
          v.push_back(c);
        }
        int last=v[0];
        int ans=0;
        for(int x=1;x<v.size();x++)
        {
           if(v[x]==0)
           {
               continue;
           }
           else
           {
              ans+=last*v[x];
              last=v[x];
           }
        }
        return ans;
    }
};