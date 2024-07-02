class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        map<int,int>m;
        for(int x=0;x<nums1.size();x++)
        {
         m[nums1[x]]++;
        }
        for(int x=0;x<nums2.size();x++)
        {
            if(--m[nums2[x]]>=0)
            {
                v.push_back(nums2[x]);
            }
        }
        return v;
    }
};