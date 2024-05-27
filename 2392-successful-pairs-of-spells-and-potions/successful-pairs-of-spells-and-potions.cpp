class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int>v;
           
         for(int x=0;x<spells.size();x++)
         {

            long long size_p=potions.size();
            long long low=0,high=size_p-1;
            long long ans=0;
            while(low<=high)
            {
            long long mid=(low+high)/2;
            long long pro=static_cast<long long>(potions[mid])*spells[x];
            if(pro >= success)
            {
               ans=mid;
               high=mid-1;
            }
            else{
                low=mid+1;
            }
            }
          v.push_back(size_p-low);
         }
         return v;
   
    }
};