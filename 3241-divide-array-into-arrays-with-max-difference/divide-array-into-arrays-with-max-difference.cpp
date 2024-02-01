class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>v;
        vector<int>res;
        for(int x=0;x<nums.size()-2;x++)
        {
            if(nums[x+2]-nums[x]<=k)
            {
                res.push_back(nums[x]);
                res.push_back(nums[x+1]);
                res.push_back(nums[x+2]);
                v.push_back(res);
                res.clear();
                x+=2;
            }
            else
            {
                x++;
            }
        }
        if(v.size()==n/3)
        {
            return v;
        }
        v.clear();
        return v;
    }
};