class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(); 
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        prefix[0]=1;
        for(int x=1;x<nums.size();x++)
        {
            prefix[x]=prefix[x-1]*nums[x-1];
        }
        suffix[n-1] =1;
        for(int x=n-2;x>=0;x--)
        {
            suffix[x]=nums[x+1]*suffix[x+1];
        }
        vector<int>result(n,0);
        for(int x=0;x<nums.size();x++)
        {

            result[x]=prefix[x]*suffix[x];
            cout<<result[x]<<" ";
        }
        return result;

    }
};