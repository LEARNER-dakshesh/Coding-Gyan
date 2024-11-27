class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int,int>m;
        vector<int>v;
        for(int x=0;x<nums.size();x++)
        {
           if(m.find(target-nums[x])!=m.end())
           {
               v.push_back(m[target-nums[x]]);
               v.push_back(x);
           }
           else
           {
               m[nums[x]]=x;
           }
        }
        return v;
        return {1,1};
    }
};