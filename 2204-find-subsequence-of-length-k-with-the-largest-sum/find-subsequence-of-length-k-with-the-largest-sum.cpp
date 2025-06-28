class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n, INT_MAX);
        vector<int> ans;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < n; i++) {
            if (pq.size() < k) {
                pq.push({nums[i], i});
            } else if (nums[i] > pq.top().first) {
                pq.pop();
                pq.push({nums[i], i});
            }
        }

        while (!pq.empty()) {
            int value = pq.top().first;
            int pos = pq.top().second;
            v[pos] = value;
            pq.pop();
        }

        for (int x = 0; x < v.size(); x++) {
            if (v[x] != INT_MAX) {
                ans.push_back(v[x]);
            }
        }

        return ans;
    }
};
