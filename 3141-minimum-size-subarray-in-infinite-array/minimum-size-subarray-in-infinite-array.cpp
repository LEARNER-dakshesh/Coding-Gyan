class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
       int n=nums.size();
       long long sum=0;
       
       for(int x=0;x<nums.size();x++)
       {
        sum+=nums[x];
       }

       int cycle=target/sum;
       int rem=target%sum;
      
       if(rem==0)
       {
        return cycle*n;
       }


       long long tot=0;
       int ans=INT_MAX;
       int i=0,j=0;
       while(j<2*n)
       {
            tot+=nums[j%n];

            while(tot>rem)
            {
                tot-=nums[i%n];
                i++;
            }   
            if(tot==rem)
            {
                ans=min(ans,j-i+1);
            }
            j++;
       }
       
       return ans == INT_MAX ? -1 : ans+cycle*n; 
    }
};