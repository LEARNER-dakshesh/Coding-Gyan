class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) 
    {
        int cnt=0;
        for(int x=0;x<nums.size();x++)
        {
            for(int y=0;y<nums.size();y++)
            {
                if(nums[x]+nums[y]==target && x!=y)
                {
                    cout<<x<<" "<<y<<endl;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};