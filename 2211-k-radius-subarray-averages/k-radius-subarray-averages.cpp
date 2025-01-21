class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2 * k + 1) {
            return vector<int>(n, -1);
        }
        if (k == 0) {
            return nums; 
        }

        vector<long long> pre(n, 0);
        pre[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            pre[i] = pre[i - 1] + nums[i];
        }

        vector<int> ans(n, -1);
        for (int x = k; x + k < n; ++x) {
            long long sum = pre[x + k] - (x - k > 0 ? pre[x - k - 1] : 0);
            ans[x] = sum / (2 * k + 1);
        }

        return ans;
    }
};
