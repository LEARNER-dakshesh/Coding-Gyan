class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int arr[32];
        memset(arr,0,sizeof(arr));
        for(int num:nums)
        {
            for(int x=0;x<=31;x++)
            {
             arr[x]=(arr[x]+(num&1))%3;   
             num=num>>1;
            }
        }
        long res=0;
        for(int x=31;x>=0;x--)
        {
          res=2*res+arr[x];
        }
        return res;
    }
};