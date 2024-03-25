class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int>v;
        for(int x=0;x<nums.size();x++)
        {
            m[nums[x]]++;
        }
        for(auto x:m)
        {
            if(x.second==2)
            {
                v.emplace_back(x.first);
            }
        } 
        return v;
    }
};