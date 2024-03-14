class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        // int sum =0;
        // for(int x=0;x<nums.size();x++)
        // {
        //     for(int y=0;y<nums.size();y++)
        //     {
        //        if(x!=y)
        //        {
        //          int res=nums[x]^nums[y];
        //          int tot_setbit=__builtin_popcount(res);
        //         //  cout<<res<<" "<<tot_setbit<<"      ";
        //         sum+=tot_setbit;
        //        }
        //     }
        //     cout<<endl;
        // }
        // return sum/2;
        int hammingdistance=0;
        for(int bitpos=0;bitpos<32;bitpos++){
        int setbits=0 ;
            for(int i = 0 ;i<nums.size();i++){
                setbits+=(nums[i]>>bitpos)&1;
                
            }
            hammingdistance+=setbits * (nums.size()-setbits);
        }
        return hammingdistance;
    }

};