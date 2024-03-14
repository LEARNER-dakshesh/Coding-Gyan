class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum =0;
        for(int x=0;x<nums.size();x++)
        {
            for(int y=0;y<nums.size();y++)
            {
               if(x!=y)
               {
                 int res=nums[x]^nums[y];
                 int tot_setbit=__builtin_popcount(res);
                //  cout<<res<<" "<<tot_setbit<<"      ";
                sum+=tot_setbit;
               }
            }
            cout<<endl;
        }
        return sum/2;
    }
};