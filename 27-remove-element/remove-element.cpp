class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>v;
       for(int x=0;x<nums.size();x++)
       {
       if(nums[x]!=val)
       {
           v.push_back(nums[x]);
       }
       }
       nums.clear();
       for(int x=0;x<v.size();x++)
       {
        nums.push_back(v[x]);
       }
       return v.size();
    }
};