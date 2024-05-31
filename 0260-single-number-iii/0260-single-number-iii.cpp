class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        for(int x=0;x<nums.size();x++)
        {
         m[nums[x]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
            {
                v.push_back(x.first);
            }
        }
        return v;
    }
};