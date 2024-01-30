class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
            int n = nums.size();
        vector<int> res(n, -1);

        for (int i = 0; i < n; i++) {
            int curr = nums[i];
            for (int j = 1; j < n; j++) {
                int nextIndex = (i + j) % n;
                if (nums[nextIndex] > curr) {
                    res[i] = nums[nextIndex];
                    break;
                }
            }
        }
        return res;
    }
};