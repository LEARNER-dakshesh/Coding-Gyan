class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
          long long one_zero=0;
          long long sec_zero=0;
          long long sum1=0,sum2=0;
          for(int x=0;x<nums1.size();x++)
          {
            if(nums1[x]==0)
            {
               one_zero++;
            }
            else{
                sum1+=nums1[x];
            }
          }
          for(int x=0;x<nums2.size();x++)
          {
            if(nums2[x]==0)
            {
               sec_zero++;
            }
            else{
                sum2+=nums2[x];
            }
          }

        long long sum1_tot=sum1+one_zero;
         long long sum2_tot=sum2+sec_zero;
         if(sum1_tot>sum2_tot)
         {
            if(sec_zero==0)
            {
                return -1;
            }
            return sum1_tot;
         }
         if(sum2_tot>sum1_tot)
         {
            if(one_zero==0)
            {
                return -1;
            }
            return sum2_tot;
         }
         return sum2_tot;
    }
};