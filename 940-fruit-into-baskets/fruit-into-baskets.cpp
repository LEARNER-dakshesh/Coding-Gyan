class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int i=0,j=0;
       map<int,int>mp;
       int maxa=0;
       int n=fruits.size();
       while(j<n)
       {
         mp[fruits[j]]++;
         cout<<mp.size()<<endl;
         if(mp.size()>=3)
         {
         while(mp.size()>=3 )
         {
             int val=fruits[i];
             mp[val]--;
             if(mp[val]==0)
             {
                mp.erase(val);
             }
             i++;
         }
         }
         j++;
         maxa=max(maxa,j-i);
       } 
       maxa=max(maxa,j-i);
       return maxa;
    }
};