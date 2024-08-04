class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;   
        for(int x=0;x<nums.size();x++)
        {
            int sum=0;
            for(int y=x;y<nums.size();y++)
            {
                sum+=nums[y];
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());
        int result=0;
        for(int x=left-1;x<right;x++)
        {
            // cout<<v[x]<<" ";
            result+=v[x];
            result=result%1000000007;
        }
        return result;
    }
};