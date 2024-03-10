class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s(nums1.begin(),nums1.end());
        
        vector<int>v;
        
        for(auto it1:nums2)
        {
            if(s.count(it1)){
               v.push_back(it1);
                s.erase(it1);
            }
        }
        return v;
    }
};