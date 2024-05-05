class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        unordered_map<string,int>mp;
        string w;
        for(int x=0;x<=word.size()-k;x++)
        {
            w=word.substr(x,k);
            mp[w]++;
            x=x+k-1;
        }
        map<int,string>freq;
        int maxa=0;
        for(auto x:mp)
        {
            cout<<x.first<<" "<<x.second<<endl;
           maxa=max(maxa,x.second);
        }
        int flag=0,count=0;
        for(auto x:mp)
        {
           if(x.second!=maxa)
           {
            count+=x.second;
           }
           else if(x.second == maxa && flag==0)
           {
             flag=1;
           }
           else if(x.second==maxa && flag==1)
           {
            count+=x.second;
           }
        }
        return count;
    }
};