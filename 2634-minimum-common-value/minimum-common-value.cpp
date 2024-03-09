class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
         map<int, int> m;
    for (int i : nums1) {
        m[i]++;
    }
    int minVal = INT_MAX;
    for (int i : nums2) {
        if (m[i] > 0) {
            minVal = min(minVal, i);
        }
    }
    return minVal == INT_MAX ? -1 : minVal;
    }
};