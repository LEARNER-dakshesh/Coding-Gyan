class Solution {
public:
  int calc(int n) {
        int sum = 0;
        while (n > 0) {
            int b = n % 10;
            sum += b;
            n /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, priority_queue<int>> digitSumMap;

        for (int x = 0; x < nums.size(); x++) {
            int sum = calc(nums[x]);
            digitSumMap[sum].push(nums[x]);
        }

        int maxSum = -1;

        for (auto& entry : digitSumMap) {
            auto& pq = entry.second;
            if (pq.size() > 1) {
                int first = pq.top();
                pq.pop();
                int second = pq.top();
                pq.pop();
                maxSum = max(maxSum, first + second);
            }
        }

        return maxSum;
    }
};