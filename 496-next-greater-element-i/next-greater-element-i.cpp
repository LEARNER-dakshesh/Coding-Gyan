class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++) {
            int n = nums1[i];
            vector<int>::iterator it;
            it = find(nums2.begin(), nums2.end(), n);
            int f = 0;
            for (vector<int>::iterator x = it; x < nums2.end(); x++) {
                if (*x > n) {
                    f = 1;
                    res.push_back(*x);
                    break;
                }
            }
            if (f == 0) {
                res.push_back(-1);
            }
        }
        return res;
    }
};